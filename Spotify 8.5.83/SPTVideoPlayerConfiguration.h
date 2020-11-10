//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMPlayerConfiguration-Protocol.h"
#import "BMSpotifyVideoConfiguration-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSString, NSURL, SPTVideoFeatureProperties;
@protocol SPTProductState, SPTVideoMediaURLFactory;

@interface SPTVideoPlayerConfiguration : NSObject <SPTProductStateObserver, BMPlayerConfiguration, BMSpotifyVideoConfiguration>
{
    _Bool _preventDisplaySleepDuringVideoPlayback;
    unsigned long long _videoCDNLoggingOption;
    id <SPTProductState> _productState;
    SPTVideoFeatureProperties *_videoFeatureProperties;
    id <SPTVideoMediaURLFactory> _mediaURLFactory;
    NSString *_manifestURLTemplate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *manifestURLTemplate; // @synthesize manifestURLTemplate=_manifestURLTemplate;
@property(retain, nonatomic) id <SPTVideoMediaURLFactory> mediaURLFactory; // @synthesize mediaURLFactory=_mediaURLFactory;
@property(retain, nonatomic) SPTVideoFeatureProperties *videoFeatureProperties; // @synthesize videoFeatureProperties=_videoFeatureProperties;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) _Bool preventDisplaySleepDuringVideoPlayback; // @synthesize preventDisplaySleepDuringVideoPlayback=_preventDisplaySleepDuringVideoPlayback;
@property(readonly, nonatomic) unsigned long long videoCDNLoggingOption; // @synthesize videoCDNLoggingOption=_videoCDNLoggingOption;
- (id)mediaURLForManifestID:(id)arg1;
@property(readonly, nonatomic) _Bool bitstreamCachingEnabled;
@property(readonly, nonatomic) _Bool subtitlesEnabled;
@property(readonly, nonatomic) NSURL *fairplayLicenseURL;
@property(readonly, nonatomic) NSURL *fairplayApplicationCertificateURL;
- (id)remoteManifestURLForManifestID:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)updateVideoCDNSampling;
- (void)updateManifestURLTemplate;
- (void)dealloc;
- (void)updateProductState;
- (id)initWithProductState:(id)arg1 videoFeatureProperties:(id)arg2 mediaURLFactory:(id)arg3 preventDisplaySleepDuringVideoPlayback:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

