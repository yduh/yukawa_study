// $Modified: Sat Oct 21 14:03:46 2006 by puwer $
      t3 = N2*beta*z-2.0+N2;
      t4 = alpha*t3;
      t5 = sigma0;
      t6 = t4*t5;
      t7 = s*beta2;
      t8 = 2.0*t7;
      t9 = mzq*beta2;
      t10 = 4.0*t9;
      t11 = beta6*mzq;
      t12 = 4.0*t11;
      t13 = mzq*beta4;
      t14 = 2.0*t13;
      t15 = s*beta;
      t16 = t15*z;
      t17 = 4.0*t16;
      t18 = beta5*z3;
      t20 = 6.0*t18*mzq;
      t21 = beta5*z5;
      t23 = 2.0*t21*mzq;
      t24 = s*beta8;
      t25 = t24*z2;
      t26 = 3.0*t25;
      t27 = s*beta6;
      t28 = t27*z4;
      t29 = 3.0*t28;
      t32 = 4.0*mzq*beta5*z;
      t33 = s*beta5;
      t34 = t33*z5;
      t35 = 4.0*t34;
      t36 = t13*z2;
      t37 = 2.0*t36;
      t40 = 6.0*mzq*beta3*z;
      t41 = t27*z6;
      t42 = s*beta4;
      t43 = t42*z2;
      t44 = 7.0*t43;
      t45 = t42*z4;
      t47 = t27*z2;
      t48 = -t8-t10+t12-t14+t17+t20-t23+t26-t29-t32-t35+t37+t40+t41-t44+5.0*t45
-t47;
      t49 = s*beta7;
      t50 = t49*z5;
      t52 = t49*z;
      t54 = t33*z;
      t56 = t33*z3;
      t58 = s*beta3;
      t59 = t58*z;
      t60 = 2.0*t59;
      t61 = t58*z3;
      t63 = t49*z3;
      t66 = 6.0*t11*z2;
      t68 = 2.0*t11*z4;
      t69 = t7*z2;
      t70 = 4.0*t69;
      t71 = t24*z4;
      t72 = beta3*z3;
      t74 = 6.0*t72*mzq;
      t75 = t9*z2;
      t76 = 4.0*t75;
      t78 = 2.0*t24;
      t79 = 2.0*s;
      t80 = 2.0*t50+4.0*t52-8.0*t54+16.0*t56+t60-10.0*t61-6.0*t63-t66+t68+t70-
t71-t74+t76+4.0*t42-t78-t79+t27;
      t82 = B(t,mtq,mzq);
      t84 = gvt*gvt;
      t87 = 1/s;
      t88 = beta*z;
      t89 = -1.0+t88;
      t90 = t89*t89;
      t92 = 1/t90/t89;
      t95 = 1/(1.0+t88);
      t96 = t87*t92*t95;
      t97 = 1/N;
      t100 = 1/(-1.0-beta2+2.0*t88);
      t102 = 1./M_PI;
      t104 = t96*t97*t100*t102;
      t107 = B(mtq,mtq,mzq);
      t109 = 10.0*t13;
      t110 = 2.0*t28;
      t111 = 18.0*t36;
      t112 = -t7+t10+t12-t109-t20+t23+t26+t110+t32+t111-t40+t44-t45;
      t113 = 8.0*t47;
      t114 = 2.0*t69;
      t115 = 12.0*t75;
      t116 = 3.0*t42;
      t117 = 4.0*mzq;
      t118 = beta4*z4;
      t120 = 4.0*t118*mzq;
      t121 = 5.0*t27;
      t122 = -t113-t66+t68-t114-t71+t74-t115-t116-t78+s+t117-t120+t121;
      t126 = beta-1.0;
      t127 = 1/t126;
      t129 = beta+1.0;
      t130 = 1/t129;
      t131 = t130*t102;
      t133 = t96*t97*t127*t131;
      t136 = 2.0*mzq;
      t139 = beta2*z2;
      t140 = 3.0*t139;
      t141 = 2.0*beta2;
      t142 = beta3*z;
      t143 = 2.0*beta4;
      t144 = beta4*z2;
      t145 = 3.0*t144;
      t146 = -t140+t141-t142+1.0+t88-t118-t143+t145;
      t149 = diffB0(mtq,mt,mz);
      t151 = 1/t90;
      t153 = t95*t97;
      t154 = t153*t102;
      t158 = A(mtq);
      t159 = A(mzq);
      t160 = -t158+t159;
      t162 = t118-t145+beta4+t140-beta2-1.0;
      t166 = t5*t3*alpha*t87;
      t168 = 1/t89;
      t173 = t168*t95*t97*t100*t127*t131;
      t176 = 9.0*t25;
      t179 = -t8+t10-t12+t14+t17-t20+t23+t176+t29+t32-t35-t37-t40-t41-5.0*t43-
t45-7.0*t47;
      t184 = 6.0*t61;
      t186 = 3.0*t71;
      t188 = 6.0*t24;
      t189 = 3.0*t27;
      t190 = 6.0*t50+12.0*t52-16.0*t54+24.0*t56-t60-t184-18.0*t63+t66-t68+t70-
t186+t74-t76+8.0*t42-t188-t79+t189;
      t193 = gat*gat;
      t199 = 3.0*t7;
      t203 = t199+t10+t12-t109-t20+t23-t176-6.0*t28+t32+t111-t40-21.0*t43+3.0*
t45;
      t207 = 3.0*s;
      t209 = 24.0*t47-t66+t68+6.0*t69+t186+t74-t115+9.0*t42+t188-t207+t117-t120
-15.0*t27;
      selfenergy_Z += t6*(t48+t80)*t82*t84*t104/2.0+t107*t84*(t112+t122)*t6*t133
/2.0+t4*t5*(t7-t136-s)*t146*t84*t149*t151*t154/4.0-2.0*t84*t160*t162*t166*t173-
t6*(t179+t190)*t82*t193*t104/2.0+t107*t193*(t203+t209)*t6*t133/2.0-t4*t5*(t199+
t136-t207)*t146*t193*t149*t151*t154/4.0-2.0*t193*t160*t162*t166*t173;
      t230 = 2.0*t16;
      t232 = 2.0*t34;
      t242 = -t7+t230+6.0*t25+t29-t232-t41-2.0*t43-2.0*t45-5.0*t47+4.0*t50+8.0*
t52-10.0*t54+14.0*t56-t60-2.0*t61-12.0*t63+t114;
      t247 = mhq*beta4;
      t249 = mhq*beta6;
      t251 = mhq*beta2;
      t253 = mhq*beta5;
      t254 = t253*z;
      t256 = t253*z3;
      t258 = t247*z2;
      t260 = mhq*beta3;
      t261 = t260*z;
      t263 = t253*z5;
      t265 = t249*z4;
      t267 = t251*z2;
      t269 = t260*z3;
      t271 = t249*z2;
      t273 = -2.0*t71+5.0*t42-4.0*t24-s+2.0*t27+2.0*t247-4.0*t249+4.0*t251+4.0*
t254-6.0*t256-2.0*t258-6.0*t261+2.0*t263-2.0*t265-4.0*t267+6.0*t269+6.0*t271;
      t275 = B(t,mtq,mhq);
      t279 = 1/swq;
      t280 = t102*t279;
      t281 = mw*mw;
      t282 = 1/t281;
      t283 = t280*t282;
      t285 = t100*t92*t153;
      t286 = t283*t285;
      t289 = t5*t102;
      t291 = t7-t26-t110-t44+t45+t113+t114+t71+t116+t78-s-t121-5.0*t247;
      t304 = 2.0*mhq+2.0*t249+2.0*t251+2.0*t254-3.0*t256+9.0*t258-3.0*t261+t263
+t265-6.0*t267+3.0*t269-3.0*t271-2.0*t247*z4;
      t309 = B(mtq,mtq,mhq);
      t312 = t279*t282;
      t313 = t312*t97;
      t322 = diffB0(mtq,mt,mh);
      t330 = A(mhq);
      t334 = t4*t95;
      t336 = t97*t168;
      t338 = t336*t100*t283;
      selfenergy_H += t6*t126*t129*(t242+t273)*t275*t286/64.0-t289*t3*(t291+t304
)*alpha*t309*t92*t95*t313/32.0+t6*s*t126*t129*(mhq-s+t7)*t146*t322*t153*t151*
t282*t280/64.0-(t158-t330)*t162*t5*t334*t338/16.0;
      t341 = 4.0*mwq;
      t342 = 4.0*mbq;
      t347 = diffB0(mtq,mb,mw);
      t365 = B(t,mbq,mwq);
      t367 = t279*t87;
      t372 = mbq*beta2;
      t374 = mbq*beta5;
      t377 = z4*beta6;
      t386 = mbq*beta4;
      t391 = 8.0*t372-12.0*t374*z3-4.0*t377*mwq+24.0*t139*mwq-12.0*t72*mwq-t8
-4.0*t21*mwq-8.0*t386*z4-8.0*mwq*beta2+t26+t28;
      t395 = 6.0*t56;
      t399 = -t34-t43-4.0*t47+t50+2.0*t52-5.0*t54+t395+3.0*t59-3.0*t61-3.0*t63+
t114-t71;
      t401 = mbq*beta6;
      t406 = mbq*beta3;
      t417 = t42-t78+t189+8.0*t401-20.0*t386+20.0*beta4*mwq-12.0*t406*z+8.0*
t374*z+4.0*t374*z5+12.0*t406*z3-24.0*t372*z2;
      t422 = z2*beta6;
      t442 = -12.0*t401*z2+4.0*t401*z4+12.0*t422*mwq-8.0*beta5*mwq*z+36.0*t386*
z2+8.0*t118*mwq+12.0*t142*mwq-36.0*t144*mwq+12.0*t18*mwq-8.0*mwq+8.0*mbq-8.0*
beta6*mwq;
      t445 = B(mtq,mbq,mwq);
      t457 = A(mwq);
      t458 = A(mbq);
      t460 = (t457-t458)*t162;
      selfenergy_W += -t4*t5*(t341-t342-s+t7)*t146*t347*t279*t151*t154/32.0+t5*(
z+1.0)*(-1.0+z)*beta2*t4*(-2.0-beta2+t72+t143-t144-2.0*t142+3.0*t88)*(-t7+t230-
s-t341+t342)*t365*t102*t367*t285/16.0-t6*(t391+t399+t417+t442)*t445*t102*t92*
t95*t279*t87*t127*t130*t97/16.0-t460*t5*t4*t367*t173/2.0;
      t466 = s*s;
      t467 = t466*beta4;
      t468 = s*mbq;
      t469 = t468*beta2;
      t470 = 8.0*t469;
      t471 = t466*beta2;
      t472 = 2.0*t471;
      t473 = t7*mwq;
      t475 = mbq*mwq;
      t477 = mwq*s;
      t479 = mb*mb;
      t480 = t479*t479;
      t482 = 8.0*t468;
      t491 = t480*beta6;
      t492 = 32.0*t491;
      t493 = t466*beta8;
      t494 = t480*beta2;
      t495 = 32.0*t494;
      t497 = t480*beta4;
      t501 = beta*beta;
      t502 = t501*t501;
      t503 = t502*t502;
      t505 = t466*t503*beta;
      t506 = t505*z;
      t510 = t467*z2;
      t512 = -t492+t493+t495-16.0*t468+16.0*t497-t467-16.0*t469-8.0*t473+6.0*
t506+6.0*t467*z4-5.0*t510;
      t514 = 2.0*t471*z2;
      t515 = t466*beta6;
      t516 = t515*z4;
      t519 = t466*t503*t501;
      t520 = t519*z4;
      t521 = t466*beta5;
      t522 = t521*z5;
      t523 = t480*beta5;
      t525 = 48.0*t523*z3;
      t526 = t494*z2;
      t529 = 16.0*t491*z4;
      t530 = t497*z2;
      t532 = t480*beta3;
      t534 = 48.0*t532*z;
      t536 = 48.0*t491*z2;
      t537 = t466*beta3;
      t538 = t537*z3;
      t540 = t514-11.0*t516-t520-t522-t525-32.0*t526-t529-16.0*t530-t534+t536
-7.0*t538;
      t542 = t468*beta6;
      t545 = 3.0*t519*z2;
      t546 = t505*z5;
      t550 = t505*z3;
      t555 = 16.0*t468*beta8;
      t556 = t42*mwq;
      t558 = t27*mwq;
      t561 = 8.0*t24*mwq;
      t563 = 16.0*t523*z5;
      t564 = 8.0*t542+t545+3.0*t546+2.0*t515*z6-9.0*t550-2.0*t493*z6-t555+4.0*
t556+12.0*t558-t561+t563;
      t566 = 32.0*t523*z;
      t567 = t515*z2;
      t569 = t493*z2;
      t571 = t466*beta7;
      t572 = t571*z3;
      t574 = t521*z;
      t576 = t521*z3;
      t579 = 2.0*t571*z5;
      t580 = t468*beta4;
      t582 = t493*z4;
      t584 = t571*z;
      t587 = 32.0*t372*mwq;
      t589 = 48.0*t532*z3;
      t590 = t566+5.0*t567-5.0*t569+11.0*t572-4.0*t574+5.0*t576-t579+32.0*t580+
6.0*t582-9.0*t584-t587+t589;
      t593 = t386*mwq;
      t596 = 32.0*t401*mwq;
      t597 = z2*mwq;
      t598 = t42*t597;
      t600 = z5*mwq;
      t602 = 4.0*t33*t600;
      t603 = z4*mwq;
      t605 = 4.0*t24*t603;
      t606 = z*mwq;
      t608 = 8.0*t49*t606;
      t609 = z3*mwq;
      t611 = 12.0*t58*t609;
      t613 = 12.0*t49*t609;
      t614 = t27*t603;
      t619 = -16.0*t593+t596-t472-4.0*t598-t602-t605+t608-t611-t613+4.0*t614+
32.0*t15*z*mbq;
      t621 = 48.0*t406*t609;
      t623 = 48.0*t406*t606;
      t624 = t386*t597;
      t627 = 32.0*t374*t606;
      t629 = 16.0*t374*t600;
      t631 = 48.0*t374*t609;
      t632 = t372*t597;
      t635 = 48.0*t401*t597;
      t637 = 16.0*t401*t603;
      t638 = t468*t118;
      t640 = beta5*z;
      t645 = -t621+t623+16.0*t624-t627-t629+t631+32.0*t632-t635+t637+40.0*t638
-64.0*t468*t640-32.0*t468*t21;
      t649 = t468*t139;
      t651 = t468*t422;
      t657 = t468*t377;
      t670 = 8.0*t468*beta8*z4;
      t674 = -80.0*t468*t72+32.0*t649-8.0*t651+128.0*t468*t18+16.0*t468*t142
-24.0*t657-48.0*t468*beta7*z3+8.0*t468*beta6*z6+32.0*t468*beta7*z-t670+16.0*
t468*beta7*z5;
      t676 = 56.0*t468*t144;
      t679 = 24.0*t468*beta8*z2;
      t681 = 4.0*t49*t600;
      t683 = 12.0*t24*t597;
      t685 = 24.0*t33*t609;
      t686 = t27*t597;
      t689 = 20.0*t33*t606;
      t691 = 12.0*t58*t606;
      t692 = t7*t597;
      t694 = t537*z;
      t696 = 2.0*t519;
      t698 = -t676+t679+t681+t683+t685-16.0*t686-t689+t691+8.0*t692+7.0*t694-
t696+4.0*t515;
      t708 = t95*t102;
      t722 = -t492+5.0*t493-t495+t482+32.0*t475+80.0*t497-3.0*t467+8.0*t477-
t470+2.0*t506+3.0*t510-t514-t516-t520+t522+t525+96.0*t526-t529-144.0*t530+t534;
      t737 = -t563-t566+3.0*t567-7.0*t569+9.0*t572+8.0*t574-9.0*t576-t579-24.0*
t580+2.0*t582-7.0*t584;
      t747 = t611+t613+12.0*t614+t621-t623+144.0*t624+t627+t629-t631-96.0*t632-
t635;
      t764 = -t685-48.0*t686+t689-t691-24.0*t692-3.0*t694-t696-2.0*t515+32.0*
t497*z4-8.0*t477*t118-32.0*t475*t118;
      selfenergy_Phi += t6*(t467+t470-t472+4.0*t473+t466-16.0*t475-4.0*t477+16.0
*t480-t482)*t146*t347*t312*t151*t154/256.0+t6*(t512+t540+t564+t590+t619+t645+
t674+t698)*t365*t279*t282*t87*t100*t92*t97*t708/128.0+t6*(t472-32.0*t480+t536+
3.0*t538+40.0*t542+t545-t561-3.0*t550-t555+t546-t589+t596+60.0*t598+t587+t602-
t605-t608-16.0*t649-8.0*t638+t637+16.0*t657+t676+t679-t681+t683+t722+t737+28.0*
t558+t764-t670+t747-64.0*t651-80.0*t593-28.0*t556)*t445*t102*t92*t312*t87*t127*
t130*t153/128.0+t460*(-t342-s+t7)*t5*t4*t312*t87*t100*t336*t95*t127*t131/16.0;
      t792 = -t7-t10+t12-t14+t230+t20-t23-t29-t32-t232+t37+t40+t41;
      t796 = -4.0*t43+4.0*t45+t47-2.0*t54+t395+t60-t184-t66+t68+t114-t74+t76+
t42-s;
      t814 = -3.0*t422+2.0*beta6+t377+2.0*t640-3.0*t18+t21-2.0*t118+9.0*t144
-5.0*beta4+3.0*t72-3.0*t142+t141-6.0*t139+2.0;
      selfenergy_Chi += -t5*t129*t126*t4*(t792+t796)*t82*t286/64.0-t289*t3*mzq*
t814*alpha*t107*t92*t95*t313/32.0+t5*alpha*t126*t129*t146*s*mzq*t3*t149*t312*
t151*t97*t708/64.0+t162*t160*t5*t334*t338/16.0;
