//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationUIContextHandler-Protocol.h"

@class NSArray, NSString;

@interface SPTAssistedCurationPlaylistUIContextHandler : NSObject <SPTAssistedCurationUIContextHandler>
{
}

- (_Bool)canHandleContextURI:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *waitForCardProviders;
@property(readonly, copy, nonatomic) NSString *addActionAccessibilityLabel;
@property(readonly, nonatomic) long long addActionIcon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

