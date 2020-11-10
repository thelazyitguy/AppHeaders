//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AsyncDisplayKit/ASAbsoluteLayoutElement-Protocol.h>
#import <AsyncDisplayKit/ASLayoutElementExtensibility-Protocol.h>
#import <AsyncDisplayKit/ASLocking-Protocol.h>
#import <AsyncDisplayKit/ASStackLayoutElement-Protocol.h>

@class NSString;
@protocol ASLayoutElementStyleDelegate;

@interface ASLayoutElementStyle : NSObject <ASStackLayoutElement, ASAbsoluteLayoutElement, ASLayoutElementExtensibility, ASLocking>
{
    // Error parsing type: {RecursiveMutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: __instanceLock__
    struct ASLayoutElementStyleExtensions _extensions;
    // Error parsing type: {atomic<ASLayoutElementSize>="__a_"{__cxx_atomic_impl<ASLayoutElementSize, std::__1::__cxx_atomic_base_impl<ASLayoutElementSize> >="__a_value"A{?}}}, name: _size
    // Error parsing type: {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >="__a_value"Ad}}, name: _spacingBefore
    // Error parsing type: {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >="__a_value"Ad}}, name: _spacingAfter
    // Error parsing type: {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >="__a_value"Ad}}, name: _flexGrow
    // Error parsing type: {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >="__a_value"Ad}}, name: _flexShrink
    // Error parsing type: {atomic<ASDimension>="__a_"{__cxx_atomic_impl<ASDimension, std::__1::__cxx_atomic_base_impl<ASDimension> >="__a_value"A{?}}}, name: _flexBasis
    // Error parsing type: {atomic<ASStackLayoutAlignSelf>="__a_"{__cxx_atomic_impl<ASStackLayoutAlignSelf, std::__1::__cxx_atomic_base_impl<ASStackLayoutAlignSelf> >="__a_value"AC}}, name: _alignSelf
    // Error parsing type: {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >="__a_value"Ad}}, name: _ascender
    // Error parsing type: {atomic<double>="__a_"{__cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >="__a_value"Ad}}, name: _descender
    // Error parsing type: {atomic<CGPoint>="__a_"{__cxx_atomic_impl<CGPoint, std::__1::__cxx_atomic_base_impl<CGPoint> >="__a_value"A{CGPoint}}}, name: _layoutPosition
    id <ASLayoutElementStyleDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <ASLayoutElementStyleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)propertyDidChange:(id)arg1;
- (id)propertiesForDescription;
@property(readonly, copy) NSString *description;
- (struct UIEdgeInsets)layoutOptionExtensionEdgeInsetsAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionEdgeInsets:(struct UIEdgeInsets)arg1 atIndex:(int)arg2;
- (long long)layoutOptionExtensionIntegerAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionInteger:(long long)arg1 atIndex:(int)arg2;
- (_Bool)layoutOptionExtensionBoolAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionBool:(_Bool)arg1 atIndex:(int)arg2;
@property(nonatomic) struct CGPoint layoutPosition;
@property(nonatomic) double descender;
@property(nonatomic) double ascender;
@property(nonatomic) unsigned char alignSelf;
@property(nonatomic) CDStruct_7f320dbc flexBasis;
@property(nonatomic) double flexShrink;
@property(nonatomic) double flexGrow;
@property(nonatomic) double spacingAfter;
@property(nonatomic) double spacingBefore;
@property(nonatomic) CDStruct_69654f45 maxLayoutSize; // @dynamic maxLayoutSize;
@property(nonatomic) CDStruct_69654f45 minLayoutSize; // @dynamic minLayoutSize;
@property(nonatomic) CDStruct_69654f45 preferredLayoutSize; // @dynamic preferredLayoutSize;
@property(nonatomic) struct CGSize maxSize; // @dynamic maxSize;
@property(nonatomic) struct CGSize minSize; // @dynamic minSize;
@property(nonatomic) struct CGSize preferredSize; // @dynamic preferredSize;
@property(nonatomic) CDStruct_7f320dbc maxHeight; // @dynamic maxHeight;
@property(nonatomic) CDStruct_7f320dbc minHeight; // @dynamic minHeight;
@property(nonatomic) CDStruct_7f320dbc maxWidth; // @dynamic maxWidth;
@property(nonatomic) CDStruct_7f320dbc minWidth; // @dynamic minWidth;
@property(nonatomic) CDStruct_7f320dbc height; // @dynamic height;
@property(nonatomic) CDStruct_7f320dbc width; // @dynamic width;
- (void)setSize:(CDStruct_99d2e400)arg1;
- (CDStruct_99d2e400)size;
- (_Bool)tryLock;
- (void)unlock;
- (void)lock;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

