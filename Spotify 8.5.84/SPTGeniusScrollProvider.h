//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingScrollProvider-Protocol.h"

@class NSString, SPTGeniusCardsViewController, SPTGeniusService;
@protocol SPTNowPlayingScrollProviderDelegate;

@interface SPTGeniusScrollProvider : NSObject <SPTNowPlayingScrollProvider>
{
    SPTGeniusService *_geniusService;
    SPTGeniusCardsViewController *_cardsViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTGeniusCardsViewController *cardsViewController; // @synthesize cardsViewController=_cardsViewController;
@property(readonly, nonatomic) SPTGeniusService *geniusService; // @synthesize geniusService=_geniusService;
- (id)componentViewForTrack:(id)arg1;
- (void)loadContentForTrack:(id)arg1;
- (_Bool)isEnabledForTrack:(id)arg1;
- (id)identifier;
- (id)initWithGeniusService:(id)arg1 cardsViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTNowPlayingScrollProviderDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

