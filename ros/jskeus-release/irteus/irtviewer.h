static pointer (*ftab[18])();

#define QUOTE_STRINGS_SIZE 200
static char *quote_strings[QUOTE_STRINGS_SIZE]={
    "make-coords",
    ":rotate",
    "deg2rad",
    ":z",
    ":y",
    "#(:radius :flush :arrow :arc :arrow-scale)",
    "#f(1.0 1.0)",
    ":transform-vector",
    ":draw-line",
    ":draw-arrow",
    ":arrow-scale",
    ":flush",
    "send",
    ":pickviewer",
    ":draw-objects",
    "#(:title :view-name :hither :yon :width :height :draw-origin :draw-floor :floor-color)",
    "\"IRT viewer\"",
    "\"title\"",
    "#f(1.0 1.0 1.0)",
    "send-message",
    "super",
    ":create",
    ":width",
    ":height",
    ":title",
    ":event-mask",
    "(:configure)",
    "*perspective-far*",
    "*perspective-near*",
    "view",
    ":parent",
    ":x",
    ":name",
    "*viewer*",
    "lightsource",
    ":ambient",
    ":diffuse",
    ":specular",
    ":position",
    "*light0*",
    "*light1*",
    "*light2*",
    "*light3*",
    ":opengl",
    ":viewsurface",
    ":set-event-proc",
    ":buttonrelease-left",
    ":draw-event",
    ":buttonpress",
    ":set-cursor-pos-event",
    ":motionnotify-left",
    ":move-coords-event",
    ":motionnotify-middle",
    ":look1",
    "user::forward-message-to",
    "x:event",
    ":resize",
    ":makecurrent",
    ":3d-mode",
    ":viewport",
    ":xcenter",
    ":ycenter",
    ":redraw",
    "*debug*",
    "\"ConfigureNotify came to ~S~%\"",
    "warn",
    "x:xwindow",
    "/=",
    ":rotate-vector",
    ":viewpoint",
    ":viewer",
    ":viewing",
    ":look",
    "bounding-box",
    ":worldcoords",
    "send-all",
    ":vertices",
    "flatten",
    "make-bounding-box",
    ":center",
    "max",
    ":diagonal",
    "cons",
    ":view-angle",
    "\"Detect very large/small objects(~A), change perspective~%\"",
    "warning-message",
    ":viewtarget",
    "x:event-middle",
    "x:event-right",
    "x:event-left",
    "x:event-pos",
    ":move-viewing-around-viewtarget",
    "draw-globjects",
    ":draw-origin",
    ":draw-floor",
    ":floor-color",
    "glcon",
    ":gl-displaylist-id",
    "delete-displaylist-id",
    "hid",
    ":gl-hiddenline",
    ":glflush",
    "x::bg-color",
    "glclearcolorfv",
    ":null",
    ":draw",
    "find-method",
    ":bodies",
    "*epsilon*",
    "float-vector",
    ":locate",
    ":world",
    "user::*irtviewer*",
    "\";; (make-irtviewer) executed~%\"",
    ":objects",
    ":look-all",
    "x:*display*",
    "\";; no display is found. exit from (make-irtviewer)~%\"",
    "user::irtviewer-dummy",
    "user::viewer-dummy",
    "x::irtviewer",
    "\";; no display is found. exit from (make-irtviewer)~%\"",
    "x::irtviewer-dummy",
    "\"X\"",
    "\"X\"",
    "*package*",
    "\"no such package\"",
    "x::make-lr-ud-coords",
    "\"(lra uda)\"",
    ":draw-circle",
    "viewer",
    "\"(self class c &key (radius 50) (flush nil) (arrow nil) (arc 2pi) (arrow-scale #f(1.0 1.0)))\"",
    "\"(self class &rest args)\"",
    ":vtype",
    ":global",
    ":super",
    "x:panel",
    ":slots",
    "(x::viewer x::objects x::draw-things x::previous-cursor-pos x::left-right-angle x::up-down-angle x::viewpoint x::viewtarget x::drawmode x::draw-origin x::draw-floor x::floor-color)",
    ":metaclass",
    ":element-type",
    ":size",
    ":documentation",
    "make-class",
    "\"(self class &rest args &key (title \\\"IRT viewer\\\") (view-name (gensym \\\"title\\\")) (hither 200.0) (yon 50000.0) (width 500) (height 500) ((:draw-origin do) 150) ((:draw-floor df) nil) ((:floor-color fc) #f(1.0 1.0 1.0)) &allow-other-keys)\"",
    "\"(self class &rest args)\"",
    "\"(self class)\"",
    ":expose",
    "\"(self class event)\"",
    "\"(self class newwidth newheight)\"",
    ":configurenotify",
    "\"(self class event)\"",
    "\"(self class &optional p)\"",
    "\"(self class &optional p)\"",
    "\"(self class &optional (vt viewtarget) (lra left-right-angle) (uda up-down-angle))\"",
    "\"(self class &optional bbox)\"",
    "\"(self class event x y dx dy vwr)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class event)\"",
    "\"(self class &rest args)\"",
    "\"(self class &rest args)\"",
    ":select-drawmode",
    "\"(self class mode)\"",
    "\"(self class)\"",
    ":change-background",
    "\"(self class col)\"",
    "\"get/set draw-origin\"",
    "\"get/set draw-floor\"",
    "\"get/set floor-color\"",
    "x::draw-things",
    "\"(objs)\"",
    "\"GEOMETRY\"",
    "\"GEOMETRY\"",
    "\"no such package\"",
    "viewing",
    "\"(self class from &optional (to (float-vector 0 0 0)) (view-up (float-vector 0 0 1)))\"",
    "\"USER\"",
    "\"USER\"",
    "\"no such package\"",
    "user::objects",
    "\"(&optional (objs t) vw)\"",
    "(special user::*irtviewer*)",
    "user::make-irtviewer",
    "\"Create irtviewer\n  :view-name title\n  :hither    near cropping plane\n  :yon       far cropping plane\n  :width     width of the window\n  :height    height of the window\n  :draw-origin size of origin arrow, use nil to disable it\n  :draw-floor  use t to view floor\n  :floor-color floor color. default is #f(1 1 1), i.e. white.\"",
    "propertied-object",
    "nil",
    ":nomethod",
    "\"(self class &rest args)\"",
    "(user::objects user::draw-things)",
    "\"(self class &rest args)\"",
    "\"(self class &rest args)\"",
    "user::make-irtviewer-dummy",
    "\"(&rest args)\"",
    "\"GL\"",
    "\"GL\"",
    "\"no such package\"",
    ":irtviewer",
    "\"$Id$\"",
    "provide",
  };