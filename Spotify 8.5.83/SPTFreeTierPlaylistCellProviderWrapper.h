//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistCellProvider-Protocol.h"
#import "SPTFreeTierPlaylistCellProviderV2-Protocol.h"

@class NSArray, NSString;
@protocol SPTFreeTierPlaylistCellProviderV2;

@interface SPTFreeTierPlaylistCellProviderWrapper : NSObject <SPTFreeTierPlaylistCellProvider, SPTFreeTierPlaylistCellProviderV2>
{
    id <SPTFreeTierPlaylistCellProviderV2> _providerV2;
    NSArray *_sections;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) id <SPTFreeTierPlaylistCellProviderV2> providerV2; // @synthesize providerV2=_providerV2;
- (id)itemforIndexPath:(id)arg1;
- (id)identifierForCellForRowAtIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (_Bool)handlesCellAtIndexPath:(id)arg1;
- (void)didEndDisplayingPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willDisplayPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)didSelectPlaylistCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configurePlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)reuseIdentifiers;
- (id)reuseIdentifierForItem:(id)arg1 indexPath:(id)arg2;
- (double)heightForItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)handlesItem:(id)arg1 indexPath:(id)arg2;
- (void)didEndDisplayingPlaylistCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)willDisplayPlaylistCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)didSelectPlaylistCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)configureCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (id)initWithCellProvider:(id)arg1 sections:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
