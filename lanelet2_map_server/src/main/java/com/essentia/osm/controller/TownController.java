package com.essentia.osm.controller;

import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping( value = "/town" )
public class TownController 
{
	private static final Logger logger = LoggerFactory.getLogger(TownController.class); 
	
	@Value("#{'${town.path:/home/bogus/.autoware/autoware-contents/maps/vector_maps/lanelet2}'}")
	private String townPath;
	
	private void copyContent( InputStream is, OutputStream os ) throws IOException 
	{
		byte[]		buffer = new byte[ 1024 * 1024 ];
		int         len = 0;
		
		while ( ( len = is.read(buffer) ) > 0 )
		{
			os.write(buffer, 0, len);
		}
	}
	
	@GetMapping
	public void getTownMap( HttpServletRequest request, HttpServletResponse response, 
			@RequestParam String town ) throws Exception 
	{
		if( town == null )
			throw new Exception( "town name is null." );
		
		try
		{
			File 	file = new File( townPath + File.separator + town + ".osm" );
			long    contentLength;
			
			
			if( !file.exists() )
			{
				throw new Exception( "town file " + town + ".osm not found." );
			}
			if( !file.canRead() )
			{
				throw new Exception( "town file " + town + ".osm cannot read." );
			}
			contentLength = file.length();
			response.setContentType("application/vnd.osm+xml");
			response.setContentLengthLong(contentLength);
		    try ( FileInputStream fis = new FileInputStream( file );
		    		BufferedOutputStream bos = new BufferedOutputStream( response.getOutputStream() ) ) 
		    {
		    	copyContent( fis, bos );
		    }
		    catch( IOException ie )
		    {
		    	throw ie;
		    }
		}
		catch( Exception e )
		{
			logger.error( e.getMessage() );
			throw e;
		}
	}
}
