//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class MKDistanceFormatter;
@protocol TFNTwitterGeoDataProvider;

@interface T1PlacePickerTableRowAdapter : TFNItemsTableRowAdapter
{
    _Bool _disableCheckmarks;
    MKDistanceFormatter *_distanceFormatter;
    id <TFNTwitterGeoDataProvider> _geoDataProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TFNTwitterGeoDataProvider> geoDataProvider; // @synthesize geoDataProvider=_geoDataProvider;
@property(retain, nonatomic) MKDistanceFormatter *distanceFormatter; // @synthesize distanceFormatter=_distanceFormatter;
@property(nonatomic) _Bool disableCheckmarks; // @synthesize disableCheckmarks=_disableCheckmarks;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithGeoDataProvider:(id)arg1;

@end

