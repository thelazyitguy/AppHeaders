//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIPlaybackInitSegmentConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) _Bool hasPreloadCodec; // @dynamic hasPreloadCodec;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasWaitIfLoading; // @dynamic hasWaitIfLoading;
@property(nonatomic) _Bool preloadCodec; // @dynamic preloadCodec;
@property(nonatomic) _Bool waitIfLoading; // @dynamic waitIfLoading;

@end

