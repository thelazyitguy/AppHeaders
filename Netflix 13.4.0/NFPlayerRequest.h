//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface NFPlayerRequest : NSObject
{
    _Bool _allowsExternalPlayback;
    _Bool _branching;
    NSNumber *_videoId;
    double _startPosition;
    double _durationSeconds;
    double _creditsStartSeconds;
    NSString *_webVTTPlistURLString;
    NSDictionary *_trackingInfo;
    NSString *_uiLabel;
    NSString *_offlineTransactionId;
    unsigned long long _fetchOptions;
    NSString *_uniqueRequestId;
    NSString *_prereleasePIN;
    NSURL *_videoURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSString *prereleasePIN; // @synthesize prereleasePIN=_prereleasePIN;
@property(readonly, nonatomic) NSString *uniqueRequestId; // @synthesize uniqueRequestId=_uniqueRequestId;
@property(nonatomic) unsigned long long fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(nonatomic) _Bool branching; // @synthesize branching=_branching;
@property(retain, nonatomic) NSString *offlineTransactionId; // @synthesize offlineTransactionId=_offlineTransactionId;
@property(retain, nonatomic) NSString *uiLabel; // @synthesize uiLabel=_uiLabel;
@property(retain, nonatomic) NSDictionary *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(retain, nonatomic) NSString *webVTTPlistURLString; // @synthesize webVTTPlistURLString=_webVTTPlistURLString;
@property(nonatomic) double creditsStartSeconds; // @synthesize creditsStartSeconds=_creditsStartSeconds;
@property(nonatomic) double durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;
@property(retain, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
@property(readonly, nonatomic) NSString *playContextString;
@property(readonly, nonatomic) _Bool isUIAutoPlay;
@property(readonly, nonatomic) NSNumber *trackId;
- (id)init;
- (id)initWithUniqueRequestId:(id)arg1;

@end

