//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC37TreasureMapEnvironmentProvidingPlugin17GaodeMapsProvider.h"

#import "MAMapViewDelegate-Protocol.h"

@interface _TtC37TreasureMapEnvironmentProvidingPlugin17GaodeMapsProvider (TreasureMapEnvironmentProvidingPlugin) <MAMapViewDelegate>
- (void)mapView:(id)arg1 didSingleTappedAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(id)arg1 didAnnotationViewTapped:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)mapViewRegionChanged:(id)arg1;
- (void)mapInitComplete:(id)arg1;
@end
