//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/GMSEntityProvider-Protocol.h>

@class GMSMyLocationTappableUIItem, GMSVectorMapSharedResources, NSString;
@protocol GMSEntityResources, GMSEntityUIHandler, GMSMyLocationEntityProviderDelegate;

@interface GMSMyLocationEntityProvider : NSObject <GMSEntityProvider>
{
    objc_metadata_hider_ptr_a1c2b231 _renderer;
    id <GMSEntityResources> _resources;
    GMSVectorMapSharedResources *_sharedResources;
    reffed_ptr_933c1cb6 _textureAtlasesContext;
    reffed_ptr_329922e5 _behaviorCamera;
    id <GMSEntityUIHandler> _uiHandler;
    _Bool _hasAddedBehaviorToRenderer;
    _Bool _hasAddedTapEntities;
    struct Point2D _location;
    double _bearing;
    double _accuracy;
    struct vector<gmscore::base::reffed_ptr<gmscore::vector::MyLocationIndicator>, std::__1::allocator<gmscore::base::reffed_ptr<gmscore::vector::MyLocationIndicator>>> _locationIndicators;
    struct reffed_ptr<(anonymous namespace)::UpdateMyLocationBehaviorInternal> _behavior;
    GMSMyLocationTappableUIItem *_tappableItem;
    _Bool _enabled;
    _Bool _tapEnabled;
    unsigned long long _locationDotMode;
    id <GMSMyLocationEntityProviderDelegate> _delegate;
}

@property(readonly, nonatomic) struct Point2D location; // @synthesize location=_location;
@property(nonatomic) __weak id <GMSMyLocationEntityProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long locationDotMode; // @synthesize locationDotMode=_locationDotMode;
@property(nonatomic) _Bool tapEnabled; // @synthesize tapEnabled=_tapEnabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeTapEntities;
- (void)addTapEntities;
- (void)removeBehaviorFromRenderer;
- (void)addBehaviorToRenderer;
- (void)addOrRemoveTapEntitiesIfNeeded;
- (void)wasReleasedFromEntityUIHandler:(id)arg1;
- (void)wasBoundToEntityUIHandler:(id)arg1;
- (void)willDestroyRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didCreateRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 resources:(id)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;
- (void)runBehaviorUpdateBlock:(CDUnknownBlockType)arg1;
- (void)removeLocationIndicator:(const reffed_ptr_c6b907f4 *)arg1;
- (void)pushLocationIndicator:(const reffed_ptr_c6b907f4 *)arg1;
- (void)setLocation:(const struct Point2D *)arg1 bearing:(double)arg2 accuracy:(double)arg3;
@property(readonly, nonatomic) double tapRadiusPt;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
