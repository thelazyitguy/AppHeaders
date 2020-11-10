//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingScrollProvider-Protocol.h"

@class NSString, SPTConcertsScrollViewController;
@protocol SPTNowPlayingScrollProviderDelegate;

@interface SPTConcertsNowPlayingScrollProvider : NSObject <SPTNowPlayingScrollProvider>
{
    id <SPTNowPlayingScrollProviderDelegate> delegate;
    SPTConcertsScrollViewController *_concertsViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTConcertsScrollViewController *concertsViewController; // @synthesize concertsViewController=_concertsViewController;
@property(nonatomic) __weak id <SPTNowPlayingScrollProviderDelegate> delegate; // @synthesize delegate;
- (_Bool)needsLayoutUpdateAfterLoadForTrack:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (id)componentViewForTrack:(id)arg1;
- (void)loadContentForTrack:(id)arg1;
- (_Bool)isEnabledForTrack:(id)arg1;
- (id)identifier;
- (id)initWithNowPlayingCardViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

