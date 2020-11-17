static pointer CLO998();
static pointer CLO1210();
static pointer CLO1211();
static pointer CLO1219();
static pointer CLO1220();
static pointer CLO1230();
static pointer CLO1293();
static pointer CLO1368();
static pointer CLO1546();
static pointer CLO1571();
static pointer CLO1610();
static pointer CLO1785();
static pointer UWP1829();
static pointer (*ftab[97])();

#define QUOTE_STRINGS_SIZE 434
static char *quote_strings[QUOTE_STRINGS_SIZE]={
    "*attributelist*",
    ":element-type",
    ":integer",
    "make-array",
    "gldeletelists",
    "*viewers*",
    ":key",
    "find",
    ":viewsurface",
    ":makecurrent",
    "glislist",
    "\"~A is not display list\"",
    "\"could not find viewers for ~A\"",
    "glcon",
    ":height",
    ":width",
    ":components",
    ":entity",
    "\"invalid return image format\"",
    "ctranspose-image-rows",
    ":color-org",
    "glgetfloatv",
    "gllinewidth",
    "glpointsize",
    "#(:depth-test :lighting)",
    "gldisable",
    "glbegin",
    "glvertex3fv",
    "glend",
    "glenable",
    "#(:depth-test :lighting)",
    "#(:depth-test :lighting)",
    "x:*display*",
    "glxmakecurrent",
    ":flush",
    ":glflush",
    "super",
    "#(:x :y :width :height)",
    ":getglimage",
    ":x",
    ":y",
    "image::write-image-file",
    "#(:x :y :width :height :imagebuf :depthbuf)",
    "make-string",
    "image:color-image24",
    ":init",
    "glreadbuffer",
    "glpixelstorei",
    "glreadpixels",
    "user::dvector2float-bytestring",
    "user::float-bytestring2dvector",
    "#(:clear :flush :draw-origin :draw-floor :floor-color)",
    "#f(1.0 1.0 1.0)",
    ":viewing",
    "resetperspective",
    ":clear",
    ":color",
    "#f(1.0 0.0 0.0)",
    "glcolor3fv",
    "#f(0.0 0.0 0.0)",
    "#f(0.0 1.0 0.0)",
    "#f(0.0 0.0 0.0)",
    "#f(0.0 0.0 1.0)",
    "#f(0.0 0.0 0.0)",
    ":draw",
    "find-method",
    "faceset",
    ":draw-on",
    ":viewer",
    "\"Unknown body to draw ~A~%\"",
    "warn",
    ":gl-displaylist-id",
    ":gl-hiddenline",
    ":face-color",
    ":worldcoords",
    ":4x4",
    "glpushmatrix",
    "*temp-matrix*",
    "glmultmatrixf",
    "glcalllist",
    "glpopmatrix",
    "glgenlists",
    "glnewlist",
    "glpushattrib",
    "gldepthfunc",
    "#f(1.0 1.0 1.0)",
    ":faces",
    ":vertices",
    ":inverse-transform-vector",
    "glpolygonmode",
    "glpolygonoffset",
    "#f(0.0 0.0 0.0)",
    "glcullface",
    ":worldrot",
    ":normal",
    "glnormal3fv",
    ":edges",
    ":pvertex",
    "glpopattrib",
    "glendlist",
    ":gl-textureimage",
    "integer-vector",
    "glblendfunc",
    "glmaterialfv",
    "glgentexturesext",
    ":convexp",
    ":holes",
    ":gl-texturecoords",
    "image:grayscale-image",
    ":gl-bind-texture",
    "position",
    ":texture-max-width",
    ":texture-max-height",
    ":name",
    ":depth",
    "\"not supported depth\"",
    "\"unsupported image type ~A in ~A\"",
    "gluscaleimage",
    "glbindtextureext",
    "glteximage2d",
    "gltexparameteri",
    "gltexenvi",
    "gethash",
    "gltexcoord2fv",
    "*tess-obj*",
    "glutessbeginpolygon",
    "glutessbegincontour",
    "glutessendcontour",
    "hole",
    "glunextcontour",
    "glutessendpolygon",
    "unix:free",
    "alloctessinfo",
    "glutessvertex",
    "colormaterial",
    ":diffuse",
    "*face-colors*",
    "find-if",
    "\"Color name not found \"",
    "\"transparent: body ~A param ~A face-color ~A~%\"",
    "float-vector",
    "#f(0.0)",
    "#(:viewer :flush :width :color)",
    "*viewer*",
    "#f(1.0 1.0 1.0)",
    ":line-width",
    ":3d-lines",
    "#(:viewer :flush :width :color)",
    "#f(1.0 1.0 1.0)",
    ":3d-line",
    "#(:viewer :flush :width :color)",
    "#f(1.0 1.0 1.0)",
    "#(:file :image :tex-coords)",
    "send-all",
    ":test",
    "equal",
    "member",
    "probe-file",
    "user::read-image-file",
    "\"~A/img/~A\"",
    "*eusdir*",
    "\"~A/img/~A\"",
    "\"~A/~A\"",
    "\"~A/~A\"",
    "\";; Could not find file ~A~%\"",
    "make-hash-table",
    "sethash",
    ":worldpos",
    "#(:viewer :flush :width :color :size)",
    ":size",
    "#f(1.0 1.0 1.0)",
    ":transform-vector",
    "#(:viewer :flush :width :color :size)",
    "#f(1.0 1.0 1.0)",
    "#(:filename)",
    "send-message",
    ":transparent",
    "assoc",
    "delete",
    ":get-meshinfo",
    ":material",
    ":set-meshinfo",
    "array-dimension",
    "user::c-matrix-row",
    ":actual-vertices",
    "make-bounding-box",
    ":calc-bounding-box",
    ":body",
    ":copy-coords",
    ":set-offset",
    ":reset-coords",
    ":expand-vertices-info",
    ":indices",
    "make-matrix",
    ":normals",
    ":flat",
    ":type",
    ":triangles",
    ":quads",
    ":lines",
    "nil",
    "\";; keyword :type not found (processing as :triangles)~%\"",
    "\";; mesh-type not found ~A~%\"",
    "#(:create :invert-faces :axis)",
    ":z",
    "glvertices",
    "#(:wrt)",
    ":local",
    "\";; not supported mesh type -> ~A\"",
    ":world",
    "face",
    ":convert-to-faces",
    ":wrt",
    "flatten",
    "send",
    ":transform",
    "#(:create)",
    "mesh-list",
    "user::c-coords-transform-vector",
    "#(:create)",
    ":create",
    "string=",
    ":transformation",
    "#(:viewer)",
    "gllightmodeli",
    "gldepthmask",
    ":texcoords",
    "glshademodel",
    ":ambient",
    ":specular",
    ":emission",
    ":shininess",
    ":transparency",
    ":teximage",
    "glmaterialf",
    "image:color-image32",
    "glenableclientstate",
    "glvertexpointer",
    "glnormalpointer",
    "gltexcoordpointer",
    "\";; keyword :type not found (processing as :triangles)~%\"",
    "\";; mesh-type not found ~A~%\"",
    "user::lvector2integer-bytestring",
    "gldrawelements",
    "gldrawarrays",
    "gldisableclientstate",
    "#(:fat)",
    "geometry::pqpmakemodel",
    "\";; not supported mesh type -> ~A\"",
    "geometry::pqpdeletemodel",
    "geometry::pqpbeginmodel",
    "geometry::pqpaddtri",
    "geometry::pqpendmodel",
    "user::forward-message-to",
    ":set-color",
    "#(:material)",
    "#(:material)",
    "geometry::face-to-triangle-aux",
    "#(:scale :use_ambient :use_normal :use_texture)",
    "\"    Shape {~%\"",
    ":filename",
    "\"      appearance Appearance {\n        material Material {~%\"",
    "\"          diffuseColor     ~A ~A ~A~%\"",
    "\"          diffuseColor     ~A ~A ~A~%\"",
    "\"          specularColor    ~A ~A ~A~%\"",
    "\"          emissiveColor    ~A ~A ~A~%\"",
    "\"          shininess        ~A~%\"",
    "\"          transparency     ~A~%\"",
    "\"          ambientIntensity 0~%\"",
    "\"        }~%\"",
    "\"      }~%\"",
    "\"      geometry IndexedFaceSet {\n        ccw    TRUE\n        convex TRUE\n        solid  FALSE\n        creaseAngle 0\n        coord  Coordinate {\n          point [~%\"",
    "\"~8,8f ~8,8f ~8,8f,~%\"",
    "\"                ]\n        }~%\"",
    "\"        coordIndex [~%\"",
    "\"~D, ~D, ~D, -1,~%\"",
    "\"        ]\n      } #IndexedFaceSet\n    } #Shape~%\"",
    ":direction",
    ":output",
    "open",
    "\"Transform {~%\"",
    "\"  children [~%\"",
    "_dump-wrl-shape",
    "\"  ] #children~%\"",
    "\"} #Transform~%\"",
    ":irtglrgb",
    "require",
    "\"GL\"",
    "\"GL\"",
    "*package*",
    "\"no such package\"",
    "system::sysmod",
    "\"glPolygonOffset\"",
    "make-foreign-code",
    "gl_polygon_offset_units",
    ":constant",
    "gl_polygon_offset_point",
    "gl_polygon_offset_line",
    "gl_polygon_offset_fill",
    "gl_polygon_offset_factor",
    "gl_polygon_offset_ext",
    "gl_polygon_offset_factor_ext",
    "gl_polygon_offset_bias_ext",
    "\"glEnableClientState\"",
    "\"glDisableClientState\"",
    "\"glVertexPointer\"",
    "glcolorpointer",
    "\"glColorPointer\"",
    "\"glNormalPointer\"",
    "\"glTexCoordPointer\"",
    "\"glDrawElements\"",
    "glarrayelement",
    "\"glArrayElement\"",
    "\"glDrawArrays\"",
    "gl_vertex_array",
    "gl_normal_array",
    "gl_texture_coord_array",
    "gl_edge_flag_array",
    "gl_color_array",
    "gl_index_array",
    "set-stereo-gl-attribute",
    "\"nil\"",
    "reset-gl-attribute",
    "\"nil\"",
    "delete-displaylist-id",
    "\"(dllst)\"",
    "transpose-image-rows",
    "\"(img &optional ret)\"",
    "glviewsurface",
    ":methods",
    "\"Returns color, if color-vector is given it set color\"",
    "\"Returns line width, if x is given, it set line width\"",
    ":point-size",
    "\"Returns point size, if x is given, it set point size\"",
    ":3d-point",
    "\"Draw 3D point\"",
    "\"Draw 3D line from start to end\"",
    "\"Draw 3D lines that connecting points\"",
    "\"(self class)\"",
    ":redraw",
    "\"(self class &rest args)\"",
    "\"send glflush\"",
    ":write-to-image-file",
    "\"Write current view to file name\"",
    "\"Get current view to a image object. It returns color-image24 object.\"",
    "draw-globjects",
    "\"(vwr draw-things &key (clear t) (flush t) (draw-origin 150) (draw-floor nil) (floor-color #f(1.0 1.0 1.0)))\"",
    "draw-glbody",
    "\"(vwr abody)\"",
    "find-color",
    "\"returns color vector of given color name, the name is defiend in https://github.com/euslisp/jskeus/blob/master/irteus/irtglrgb.l\"",
    "transparent",
    "\"Set abody to transparent with param\"",
    "polygon",
    "\"(self class &key ((:viewer vwer) *viewer*) flush (width 1) (color #f(1.0 1.0 1.0)))\"",
    "line",
    "\"(self class &key ((:viewer vwer) *viewer*) flush (width 1) (color #f(1.0 1.0 1.0)))\"",
    "\"Set color of given color name, color sample and color name are referenced from http://en.wikipedia.org/wiki/X11_color_names\"",
    "\"(self class &key ((:viewer vwer) *viewer*) flush (width 1) (color #f(1.0 1.0 1.0)))\"",
    ":paste-texture-to-face",
    "\"(self class aface &key file image (tex-coords (list (float-vector 0 0) (float-vector 0 1) (float-vector 1 1) (float-vector 1 0))))\"",
    "coordinates",
    "\"(self class)\"",
    "\"(self class &key ((:viewer vwer) *viewer*) flush (width (get self :width)) (color (get self :color)) (size (get self :size)))\"",
    "\"(self class)\"",
    "\"(self class &key ((:viewer vwer) *viewer*) flush (width 1) (color #f(1.0 1.0 1.0)) (size 50))\"",
    ":global",
    ":super",
    "cascaded-coords",
    ":slots",
    "(mesh-list filename bbox)",
    ":metaclass",
    ":documentation",
    "make-class",
    "\"(self class mlst &rest args &key ((:filename fn)) &allow-other-keys)\"",
    "\"(self class &optional nm)\"",
    "\"set color as float vector of 3 elements, and transparent as float, all values are betwenn 0 to 1\"",
    "\"(self class key &optional (pos -1))\"",
    "\"(self class key info &optional (pos -1))\"",
    ":get-material",
    "\"(self class &optional (pos -1))\"",
    ":set-material",
    "\"(self class mat &optional (pos -1))\"",
    "\"return list of vertices(float-vector), it returns all vertices of this object\"",
    "\"calculate and set bounding box of this object\"",
    "\"return list of vertices(float-vector), it returns vertices of bounding box of this object\"",
    ":reset-offset-from-parent",
    "\"move vertices in this object using self transformation, this method change values of vertices. coordinates's method such as :transform just change view of this object\"",
    ":expand-vertices",
    "\"expand vertices number as same number of indices, it enable to set individual normal to every vertices\"",
    "\"(self class minfo)\"",
    ":use-flat-shader",
    "\"use flat shader mode, use opengl function of glShadeModel(GL_FLAT)\"",
    ":use-smooth-shader",
    "\"use smooth shader mode, use opengl function of glShadeModel(GL_SMOOTH) {default}\"",
    ":calc-normals",
    "\"normal calculation\nif force option is true, clear current normalset.\nif exapnd option is ture, do :expand-vertices.\nif flat option is true, use-flat-shader\"",
    ":mirror-axis",
    "\"creating mirror vertices respect to :axis\"",
    "\"create list of faces using vertices of this object\"",
    "\"(self class)\"",
    ":convert-to-faceset",
    "\"create faceset using vertices of this object\"",
    "\"move vertices in this object using given coordinates, this method change values of vertices. coordinates's method such as :transform just change view of this object\"",
    ":convert-to-world",
    "\"move vertices in this object using self's coordinates. vertices data should be moved as the same as displayed\"",
    ":glvertices",
    "\"create individual glvertices objects from mesh-list. if name is given, search mesh has the same name\"",
    ":append-glvertices",
    "\"append list of glvertices to this object\"",
    "\"(self class &key ((:viewer vwer) *viewer*))\"",
    "\"(self class vwr &rest args)\"",
    ":collision-check-objects",
    "\"(self class &rest args)\"",
    ":box",
    "\"(self class)\"",
    ":make-pqpmodel",
    "\"(self class &key (fat 0))\"",
    "glbody",
    "body",
    "(aglvertices)",
    "\"(self class &rest args)\"",
    "\"(self class vwr)\"",
    "\"(self class &rest args)\"",
    "make-glvertices-from-faceset",
    "\"returns glvertices instance\nfs is geomatry::faceset\"",
    "make-glvertices-from-faces",
    "\"returns glvertices instance\nflst is list of geomatry::face\"",
    "\"(strm mesh &key ((:scale scl) 1.0) (use_ambient nil) (use_normal nil) (use_texture nil) &allow-other-keys)\"",
    "write-wrl-from-glvertices",
    "\"write .wrl file from instance of glvertices\"",
    ":irtgl",
    "\"$Id$\"",
    "provide",
  };