module cam_mount_1() {
    mwd=27.5;
    mhg=20;
    mwth=1;
    pth=2.9;

    translate([0,-42.5,0]) {
        rotate([90,180,0]) {
            difference() {
                union() {
                    cube([mwd,mhg,pth+2*mwth], center=true);
                    translate([0,0,-(pth+mwth)/2])
                        cube([mwd+12,mhg,mwth], center=true);
                }
                
                translate([0,1,0])
                    cube([mwd-mwth*2,mhg,pth], center=true);
                translate([0,2,pth/2])
                    cube([mwd-mwth*4,mhg,mwth*2+0.01], center=true);

                for (d = [[-scrw/2-6,-scrh/2,0],[scrw/2+6,-scrh/2,0],[scrw/2+6,scrh/2,0],[-scrw/2-6,scrh/2,0]]) {
                    translate(d) {
                        rotate([0,0,90])
                        cylinder(d=2.5, h=5, $fn=32, center=true);
                    }
                }


            }
            
            scrw=21;
            scrh=13.5;
            translate([0,0,-0.6]) {
//                for (d = [[-scrw/2,-scrh/2,0],[scrw/2,-scrh/2,0],[scrw/2,scrh/2,0],[-scrw/2,scrh/2,0]]) {
                for (d = [[-scrw/2,-scrh/2,0],[scrw/2,-scrh/2,0]]) {
                    translate(d) {
                        cylinder(d1=4.0, d2=0.5, h=2, center=true, $fn=32);
                    }
                }
            }
            
            
            
        }
    }



}


cam_mount_1();