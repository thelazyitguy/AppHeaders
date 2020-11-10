//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ASDebugNameProvider-Protocol.h>
#import <Module_Framework/ASDescriptionProvider-Protocol.h>
#import <Module_Framework/ASLayoutElement-Protocol.h>
#import <Module_Framework/ASLayoutElementStylability-Protocol.h>
#import <Module_Framework/ASLocking-Protocol.h>
#import <Module_Framework/NSFastEnumeration-Protocol.h>

@class ASLayoutElementStyle, NSArray, NSMutableArray, NSString;
@protocol ASLayoutElement;

@interface ASLayoutSpec : NSObject <ASDebugNameProvider, ASLayoutElement, ASLayoutElementStylability, NSFastEnumeration, ASDescriptionProvider, ASLocking>
{
    // Error parsing type: {RecursiveMutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: __instanceLock__
    // Error parsing type: {atomic<ASPrimitiveTraitCollection>="__a_"{__cxx_atomic_impl<ASPrimitiveTraitCollection, std::__1::__cxx_atomic_base_impl<ASPrimitiveTraitCollection> >="__a_value"A{?}}}, name: _primitiveTraitCollection
    ASLayoutElementStyle *_style;
    NSMutableArray *_childrenArray;
    _Bool _isMutable;
    NSString *_debugName;
}

+ (id)asciiArtStringForChildren:(id)arg1 parentName:(id)arg2;
+ (id)asciiArtStringForChildren:(id)arg1 parentName:(id)arg2 direction:(unsigned char)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMutable; // @synthesize isMutable=_isMutable;
- (_Bool)tryLock;
- (void)unlock;
- (void)lock;
- (id)asciiArtName;
- (id)asciiArtString;
@property(copy, nonatomic) NSString *debugName;
@property(readonly, copy) NSString *description;
- (id)propertiesForDescription;
- (struct UIEdgeInsets)layoutOptionExtensionEdgeInsetsAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionEdgeInsets:(struct UIEdgeInsets)arg1 atIndex:(int)arg2;
- (long long)layoutOptionExtensionIntegerAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionInteger:(long long)arg1 atIndex:(int)arg2;
- (_Bool)layoutOptionExtensionBoolAtIndex:(int)arg1;
- (void)setLayoutOptionExtensionBool:(_Bool)arg1 atIndex:(int)arg2;
- (void)setPrimitiveTraitCollection:(CDStruct_104667ad)arg1;
- (CDStruct_104667ad)primitiveTraitCollection;
- (id)asyncTraitCollection;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)sublayoutElements;
@property(retain, nonatomic) NSArray *children;
@property(retain, nonatomic) id <ASLayoutElement> child;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1 restrictedToSize:(CDStruct_99d2e400)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)layoutThatFits:(CDStruct_42a63532)arg1 parentSize:(struct CGSize)arg2;
- (id)layoutThatFits:(CDStruct_42a63532)arg1;
- (struct CGSize)measure:(CDStruct_42a63532)arg1;
- (id)styledWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) ASLayoutElementStyle *style;
- (_Bool)implementsLayoutMethod;
- (_Bool)canLayoutAsynchronous;
@property(readonly, nonatomic) unsigned char layoutElementType; // @dynamic layoutElementType;
- (id)init;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)setChild:(id)arg1 atIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

