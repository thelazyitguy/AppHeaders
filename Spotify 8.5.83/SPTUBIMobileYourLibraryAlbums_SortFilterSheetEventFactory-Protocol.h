//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileYourLibraryAlbums_SortFilterSheet_CancelButtonEventFactory, SPTUBIMobileYourLibraryAlbums_SortFilterSheet_DismissEventFactory, SPTUBIMobileYourLibraryAlbums_SortFilterSheet_FilterOptionEventFactory, SPTUBIMobileYourLibraryAlbums_SortFilterSheet_SortOptionEventFactory;

@protocol SPTUBIMobileYourLibraryAlbums_SortFilterSheetEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryAlbums_SortFilterSheet_DismissEventFactory>)dismissFactory;
- (id <SPTUBIMobileYourLibraryAlbums_SortFilterSheet_CancelButtonEventFactory>)cancelButtonFactory;
- (id <SPTUBIMobileYourLibraryAlbums_SortFilterSheet_SortOptionEventFactory>)sortOptionFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIMobileYourLibraryAlbums_SortFilterSheet_FilterOptionEventFactory>)filterOptionFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

