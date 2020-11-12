//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/GMSEntityProvider-Protocol.h>

@class GMSCoreClientParameters, GMSServerResourceManager, GMSStyleTableService, NSString, NSThread;

@interface GMSLabelsEntityProvider : NSObject <GMSEntityProvider>
{
    GMSStyleTableService *_styleTableService;
    GMSCoreClientParameters *_clientParameters;
    GMSServerResourceManager *_resourceManager;
    NSThread *_renderingThread;
    struct reffed_ptr<gmscore::vector::LabelingBehavior> _labelingBehavior;
    struct unique_ptr<gmscore::vector::MutableStateTracker, std::__1::default_delete<gmscore::vector::MutableStateTracker>> _labelStateTracker;
    reffed_ptr_64032976 _labelUpdateDelegate;
    struct vector<std::__1::vector<gmscore::base::reffed_ptr<gmscore::vector::LabelableFeature>, std::__1::allocator<gmscore::base::reffed_ptr<gmscore::vector::LabelableFeature>>>, std::__1::allocator<std::__1::vector<gmscore::base::reffed_ptr<gmscore::vector::LabelableFeature>, std::__1::allocator<gmscore::base::reffed_ptr<gmscore::vector::LabelableFeature>>>>> _labelableFeatures;
    struct set<gmscore::base::reffed_ptr<gmscore::vector::LabelProvider>, std::__1::less<gmscore::base::reffed_ptr<gmscore::vector::LabelProvider>>, std::__1::allocator<gmscore::base::reffed_ptr<gmscore::vector::LabelProvider>>> _labelProviders;
    reffed_ptr_d5e81332 _pinnedLabelableFeatureSelector;
    struct set<gmscore::base::reffed_ptr<gmscore::vector::LabelableFeatureSelector>, std::__1::less<gmscore::base::reffed_ptr<gmscore::vector::LabelableFeatureSelector>>, std::__1::allocator<gmscore::base::reffed_ptr<gmscore::vector::LabelableFeatureSelector>>> _labelableFeatureFilters;
    struct set<gmscore::base::reffed_ptr<gmscore::vector::LabelDedupingRule>, std::__1::less<gmscore::base::reffed_ptr<gmscore::vector::LabelDedupingRule>>, std::__1::allocator<gmscore::base::reffed_ptr<gmscore::vector::LabelDedupingRule>>> _labelDedupingRules;
    reffed_ptr_e654501b _defaultPlaceLabelDedupingRule;
    unsigned int _nextBucketID;
    struct Mutex _bucketIDMutex;
    struct map<unsigned int, gmscore::base::reffed_ptr<gmscore::vector::LabelBucketRestriction>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, gmscore::base::reffed_ptr<gmscore::vector::LabelBucketRestriction>>>> _labelBuckets;
    struct set<gmscore::base::reffed_ptr<gmscore::vector::LabelingBehavior::Listener>, std::__1::less<gmscore::base::reffed_ptr<gmscore::vector::LabelingBehavior::Listener>>, std::__1::allocator<gmscore::base::reffed_ptr<gmscore::vector::LabelingBehavior::Listener>>> _labelingBehaviorListeners;
    _Bool _labelingEnabled;
    _Bool _performanceLabelingMode;
    _Bool _cameraMoving;
    _Bool _cameraFollowingUser;
    _Bool _navigating;
    _Bool _navigationThemeAllowed;
    _Bool _defaultPlaceLabelDedupingEnabled;
}

@property(nonatomic, getter=isDefaultPlaceLabelDedupingEnabled) _Bool defaultPlaceLabelDedupingEnabled; // @synthesize defaultPlaceLabelDedupingEnabled=_defaultPlaceLabelDedupingEnabled;
@property(nonatomic, getter=isNavigationThemeAllowed) _Bool navigationThemeAllowed; // @synthesize navigationThemeAllowed=_navigationThemeAllowed;
@property(nonatomic, getter=isNavigating) _Bool navigating; // @synthesize navigating=_navigating;
@property(nonatomic, getter=isCameraFollowingUser) _Bool cameraFollowingUser; // @synthesize cameraFollowingUser=_cameraFollowingUser;
@property(nonatomic, getter=isCameraMoving) _Bool cameraMoving; // @synthesize cameraMoving=_cameraMoving;
@property(nonatomic, getter=isPerformanceLabelingMode) _Bool performanceLabelingMode; // @synthesize performanceLabelingMode=_performanceLabelingMode;
@property(nonatomic, getter=isLabelingEnabled) _Bool labelingEnabled; // @synthesize labelingEnabled=_labelingEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=hasDelayedRendering) _Bool delayedRendering;
- (void)willPauseRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)willDestroyRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didResumeRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didCreateRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 resources:(id)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;
- (reffed_ptr_57016b98)rendererMutableState;
- (void)setLabelUpdateDelegate:(reffed_ptr_64032976)arg1;
- (void)handleMemoryWarning:(id)arg1;
@property(readonly, nonatomic) _Bool visibleLabelsAreStable;
- (void)setAnimationsEnabled:(_Bool)arg1;
- (reffed_ptr_fe03a69a)lastStableSnapshot;
- (vector_fe8c6592)renderedLabels;
- (reffed_ptr_3c29ede8)renderedLabelForFeature:(const reffed_ptr_a24f2af8 *)arg1;
- (void)removeLabelingBehaviorListener:(const reffed_ptr_1c161f82 *)arg1;
- (void)addLabelingBehaviorListener:(const reffed_ptr_1c161f82 *)arg1;
- (void)removeLabelBucketRestriction:(unsigned int)arg1;
- (void)addLabelBucketRestriction:(reffed_ptr_63fdb79c)arg1;
- (unsigned int)createBucketID;
- (void)removeLabelDedupingRule:(const reffed_ptr_e654501b *)arg1;
- (void)addLabelDedupingRule:(const reffed_ptr_e654501b *)arg1;
- (void)removeFilterForLabelableFeaturesMatchingSelector:(const reffed_ptr_d5e81332 *)arg1;
- (void)addFilterForLabelableFeaturesMatchingSelector:(const reffed_ptr_d5e81332 *)arg1;
- (void)enlargeLabelableFeatureMatchingSelector:(const reffed_ptr_d5e81332 *)arg1 animated:(_Bool)arg2;
- (void)setPinnedLabelableFeatureSelector:(const reffed_ptr_d5e81332 *)arg1;
- (void)clearLabelableFeaturesForCategory:(int)arg1;
- (void)removeLabelableFeatures:(const vector_47b6fe56 *)arg1;
- (void)removeLabelableFeatures:(const vector_47b6fe56 *)arg1 category:(int)arg2;
- (void)addLabelableFeatures:(const vector_47b6fe56 *)arg1;
- (void)addLabelableFeatures:(const vector_47b6fe56 *)arg1 category:(int)arg2;
- (void)removeLabelsProvider:(const reffed_ptr_03f800df *)arg1;
- (void)addLabelsProvider:(const reffed_ptr_03f800df *)arg1;
- (id)initWithStyleTableService:(id)arg1 clientParameters:(id)arg2 resourceManager:(id)arg3 renderingThread:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
