//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTIAPItunesProductRequestDelegate-Protocol.h"
#import "SPTIAPSpotifyProductRequestDelegate-Protocol.h"

@class NSString, SPTIAPItunesProductRequest, SPTIAPSpotifyProductRequest;
@protocol SPTIAPProductRequestDelegate, SPTIAPRequestFactory;

@interface SPTIAPProductRequest : NSObject <SPTIAPSpotifyProductRequestDelegate, SPTIAPItunesProductRequestDelegate>
{
    id <SPTIAPProductRequestDelegate> _delegate;
    id <SPTIAPRequestFactory> _productRequestFactory;
    SPTIAPSpotifyProductRequest *_spotifyProductRequest;
    SPTIAPItunesProductRequest *_itunesProductRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTIAPItunesProductRequest *itunesProductRequest; // @synthesize itunesProductRequest=_itunesProductRequest;
@property(retain, nonatomic) SPTIAPSpotifyProductRequest *spotifyProductRequest; // @synthesize spotifyProductRequest=_spotifyProductRequest;
@property(retain, nonatomic) id <SPTIAPRequestFactory> productRequestFactory; // @synthesize productRequestFactory=_productRequestFactory;
@property(nonatomic) __weak id <SPTIAPProductRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)itunesProductRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)itunesProductRequest:(id)arg1 didFinishWithProducts:(id)arg2;
- (void)itunesProductRequestDidStart:(id)arg1;
- (void)spotifyProductRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)spotifyProductRequest:(id)arg1 didFinishWithProducts:(id)arg2;
- (void)spotifyProductRequestDidStart:(id)arg1;
- (void)didComplete;
- (void)didFailWithError:(id)arg1;
- (void)didFinishWithProducts:(id)arg1;
- (void)startItunesProductRequestWithIdentifiers:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithProductRequestFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

