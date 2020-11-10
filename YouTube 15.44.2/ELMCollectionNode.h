//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASCollectionNode.h>

#import <Module_Framework/ASCollectionDataSource-Protocol.h>
#import <Module_Framework/ASCollectionDelegate-Protocol.h>
#import <Module_Framework/ELMDisplayNode-Protocol.h>
#import <Module_Framework/ELMSnapHelperDelegate-Protocol.h>
#import <Module_Framework/IGListAdapterDataSource-Protocol.h>
#import <Module_Framework/UIScrollViewDelegate-Protocol.h>

@class ELMBaseSnapHelper, ELMCollectionNodeSingleSectionController, ELMElement, IGListAdapter, NSMutableArray, NSObject, NSString;
@protocol ELMContext, ELMController, OS_dispatch_source;

@interface ELMCollectionNode : ASCollectionNode <ASCollectionDataSource, ASCollectionDelegate, IGListAdapterDataSource, UIScrollViewDelegate, ELMSnapHelperDelegate, ELMDisplayNode>
{
    id <ELMContext> _context;
    ELMCollectionNodeSingleSectionController *_singleSectionController;
    IGListAdapter *_listAdapter;
    _Bool _hasSections;
    NSMutableArray *_pendingSectionNodes;
    double _maxCellHeight;
    long long _carouselIndex;
    NSObject<OS_dispatch_source> *_carouselTimer;
    _Bool _shouldCancelOnDragging;
    // Error parsing type: {optional<youtube::elements::CollectionTypeScrollToItemCommand>="engaged_"B""(?="data_"{CollectionTypeScrollToItemCommand="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"element_key_"{ArenaStringPtr="tagged_ptr_"{TaggedPtr<std::__1::basic_string<char> >="ptr_"^v}}"animation_config_"^{MessageLite}"index_"i"scroll_interval_seconds_"f"repeat_mode_"i"cancel_on_user_interaction_"B}"dummy_"{dummy_type="data"[56{empty_struct=}]})}, name: _scrollToItemCommand
    ELMElement *_element;
    ELMBaseSnapHelper *_snapHelper;
}

+ (void)assertInvalidElement;
+ (Class)replacementClassForElement:(id)arg1 materializationContext:(const struct MaterializationContext *)arg2;
+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) ELMBaseSnapHelper *snapHelper; // @synthesize snapHelper=_snapHelper;
@property(retain) ELMElement *element; // @synthesize element=_element;
- (void)cancelCarouselTimer;
- (void)clearListAdapter;
-     // Error parsing type: r^{CollectionTypeSection=^^?{InternalMetadata=^v}{WeakRepeatedPtrField<youtube::elements::Element>=(?={RepeatedPtrField<youtube::elements::Element>=^{Arena}ii^{Rep}})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}24@0:8Q16, name: sectionAtIndex:
- (_Bool)isRTL;
- (void)snapHelperPageDidChange:(id)arg1;
- (struct CGSize)sizeForItem:(long long)arg1 inSection:(long long)arg2;
- (struct CGSize)snapHelper:(id)arg1 sizeForItemAtIndex:(long long)arg2;
- (long long)snapHelperNumberOfItems:(id)arg1;
- (double)snapHelperPageMargin:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (CDStruct_42a63532)collectionNode:(id)arg1 constrainedSizeForItemAtIndexPath:(id)arg2;
- (CDStruct_42a63532)constrainedSizeForItemWithSizingModeLargestCell;
- (CDStruct_42a63532)constrainedSizeForItemWithSizingModeNone;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
- (long long)collectionNode:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionNode:(id)arg1;
- (void)controllerDidInsertChild:(id)arg1 atIndex:(long long)arg2;
- (void)controllerDidRemoveChild:(id)arg1;
- (void)controllerDidSetChildren:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
-     // Error parsing type: v24@0:8^{SenderState=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16, name: buildSenderState:
- (void)applyViewProperties;
- (void)carouselTimerFired;
- (unsigned long long)scrollPosition;
- (void)scheduleTimerWithInterval:(float)arg1;
-     // Error parsing type: v24@0:8r^{CollectionTypeScrollToItemCommand=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}^{MessageLite}ifiB}16, name: handleScrollToItemCommand:
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
-     // Error parsing type: {CGSize=dd}40@0:8{CGSize=dd}16r^{CollectionType=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{WeakRepeatedPtrField<youtube::elements::CollectionTypeSection>=(?={RepeatedPtrField<youtube::elements::CollectionTypeSection>=^{Arena}ii^{Rep}})}^{MessageLite}Bi^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}ffBBBii}32, name: calculateSizeThatFitsLargestCellWithConstrainedSize:forCollectionType:
- (_Bool)shouldBypassSizingCellForCollectionSizing:(id)arg1 isHorizontal:(_Bool)arg2;
-     // Error parsing type: B24@0:8r^{CollectionType=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{WeakRepeatedPtrField<youtube::elements::CollectionTypeSection>=(?={RepeatedPtrField<youtube::elements::CollectionTypeSection>=^{Arena}ii^{Rep}})}^{MessageLite}Bi^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}ffBBBii}16, name: isHorizontal:
- (void)controllerDidApplyProperties;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (_Bool)managesGestureHandling;
- (void)didLoad;
- (void)dealloc;
- (id)initWithElement:(id)arg1 context:(id)arg2;
- (id)initWithElement:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <ELMController> controller; // @dynamic controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

