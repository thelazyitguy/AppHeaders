//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTICommand, YTIMenuSupportedRenderers, YTIOfflineKidsReportingSupportedRenderers;

@interface YTIOfflineKidsVideoData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMenuSupportedRenderers *browseReporting; // @dynamic browseReporting;
@property(nonatomic) _Bool hasBrowseReporting; // @dynamic hasBrowseReporting;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasWatchReporting; // @dynamic hasWatchReporting;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(retain, nonatomic) YTIOfflineKidsReportingSupportedRenderers *watchReporting; // @dynamic watchReporting;

@end

