//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileYourLibraryArtists_SortFilterSheet_CancelButtonEventFactory, SPTUBIMobileYourLibraryArtists_SortFilterSheet_DismissEventFactory, SPTUBIMobileYourLibraryArtists_SortFilterSheet_SortOptionEventFactory;

@protocol SPTUBIMobileYourLibraryArtists_SortFilterSheetEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryArtists_SortFilterSheet_DismissEventFactory>)dismissFactory;
- (id <SPTUBIMobileYourLibraryArtists_SortFilterSheet_CancelButtonEventFactory>)cancelButtonFactory;
- (id <SPTUBIMobileYourLibraryArtists_SortFilterSheet_SortOptionEventFactory>)sortOptionFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end
