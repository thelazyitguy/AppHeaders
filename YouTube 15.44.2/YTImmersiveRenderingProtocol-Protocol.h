//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSMutableArray, NSString, YTICommand;

@protocol YTImmersiveRenderingProtocol <NSObject>
- (_Bool)isImmersiveRenderingSurfaceReady;
- (void)clearEngagementPanelWithID:(NSString *)arg1;
- (void)loadEngagementPanels:(NSMutableArray *)arg1 onUIReadyCommand:(YTICommand *)arg2;
@end
