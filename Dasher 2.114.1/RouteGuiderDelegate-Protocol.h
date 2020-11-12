//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/NSObject-Protocol.h>

@class GMSDGuidanceEvent, GMSDLocation, GMSx_RouteGuider;

@protocol RouteGuiderDelegate <NSObject>
- (void)routeGuider:(GMSx_RouteGuider *)arg1 approachingGuidanceEvent:(GMSDGuidanceEvent *)arg2 metersToStep:(double)arg3;
- (void)routeGuider:(GMSx_RouteGuider *)arg1 dispatchingGuidanceEvent:(GMSDGuidanceEvent *)arg2 metersToStep:(double)arg3;
- (void)routeGuider:(GMSx_RouteGuider *)arg1 didLoseViabilityAtLocation:(GMSDLocation *)arg2;
- (void)routeGuiderDidChangeStep:(GMSx_RouteGuider *)arg1 wasSuccessiveStep:(_Bool)arg2;
- (void)routeGuiderDidFinishGuidance:(GMSx_RouteGuider *)arg1;
@end
