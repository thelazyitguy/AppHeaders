//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_CancelButtonEventFactory, SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_DismissEventFactory, SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_FilterOptionEventFactory, SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_SortOptionEventFactory;

@protocol SPTUBIMobileYourLibraryPlaylists_SortFilterSheetEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_DismissEventFactory>)dismissFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_CancelButtonEventFactory>)cancelButtonFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_SortOptionEventFactory>)sortOptionFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_FilterOptionEventFactory>)filterOptionFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end
