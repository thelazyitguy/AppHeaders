//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UBIPlaybackIdProvider-Protocol.h"

@class NSString;
@protocol SPTUBIPlaybackIdProvider;

@interface SPTUBILoggerPlaybackIdProviderWrapper : NSObject <UBIPlaybackIdProvider>
{
    id <SPTUBIPlaybackIdProvider> _wrappedProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIPlaybackIdProvider> wrappedProvider; // @synthesize wrappedProvider=_wrappedProvider;
- (id)playbackId;
- (id)initWithProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
