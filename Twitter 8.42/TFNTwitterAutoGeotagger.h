//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterComposePlaceStore, TFNTwitterCompositionGeotagSession;
@protocol TFNTwitterAutoGeotaggerDelegate;

@interface TFNTwitterAutoGeotagger : NSObject
{
    TFNTwitterCompositionGeotagSession *_geotagSession;
    TFNTwitterComposePlaceStore *_placeStore;
    id <TFNTwitterAutoGeotaggerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TFNTwitterAutoGeotaggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterComposePlaceStore *placeStore; // @synthesize placeStore=_placeStore;
@property(retain, nonatomic) TFNTwitterCompositionGeotagSession *geotagSession; // @synthesize geotagSession=_geotagSession;
- (void)_fetchDidFail:(id)arg1;
- (void)_fetchDidSucceed:(id)arg1;
- (void)performAutotag;
- (id)initWithPlaceStore:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

