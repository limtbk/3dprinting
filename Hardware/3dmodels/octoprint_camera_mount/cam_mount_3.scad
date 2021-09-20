module cam_mount_1() {
    mwd=27.5;
    mhg=20;
    mwth=1;
    pth=2.9;

//    translate([0,-42.5,0]) {
        rotate([90,0,0]) {
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
//    }



}

module cam_mount_2() {
    translate([16.8,3.6,0]) {
        difference() {
        cube([6,2,22], center=true);
        
        translate([0,0,13.5/2])
        rotate([90,0,0])
        cylinder(d=2.5, h=3, center=true, $fn=32);

        translate([0,0,-13.5/2])
        rotate([90,0,0])
        cylinder(d=2.5, h=3, center=true, $fn=32);
            
        }
        
        translate([0,0,-13])
        rotate([0,90,0]) {
            difference() {
                cylinder(h=6, d=5, $fn=32, center=true);
                cylinder(h=6.01, d=3.2, $fn=32, center=true);
            }
        }        
        
    }

    translate([-16.8,3.6,0]) {
        difference() {
        cube([6,2,22], center=true);
        
        translate([0,0,13.5/2])
        rotate([90,0,0])
        cylinder(d=2.5, h=3, center=true, $fn=32);

        translate([0,0,-13.5/2])
        rotate([90,0,0])
        cylinder(d=2.5, h=3, center=true, $fn=32);
            
        }
        
        translate([0,0,-13])
        rotate([0,90,0]) {
            difference() {
                cylinder(h=6, d=5, $fn=32, center=true);
                cylinder(h=6.01, d=3.2, $fn=32, center=true);
            }
        }        
        
    }


}

/*
        translate([0,0,-13])
        rotate([0,90,0]) {
            difference() {
                cylinder(h=27, d=5, $fn=32, center=true);
                cylinder(h=27.01, d=3.2, $fn=32, center=true);
            }
        }        
*/
module cam_mount_3() {
    translate([-10.7,3.6,-13]) {
    rotate([0,90,0]) {
        difference() {
            cylinder(h=6, d=5, $fn=32, center=true);
            cylinder(h=6.01, d=3.2, $fn=32, center=true);
        }
        
        
    }
    translate([0,0,-7])
        cube([6,2,10], center=true);
    
    translate([0,-15,-11])
        cube([6,30,2], center=true);

    translate([0,-15,-17])
        rotate([1,0,0])
        cube([6,30,2], center=true);

    translate([0,-30,-14.15])
        cube([6,2,8.3], center=true);
    
    }
}

//cam_mount_1();

//cam_mount_2();

cam_mount_3();