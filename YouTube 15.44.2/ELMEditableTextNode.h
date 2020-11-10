//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASEditableTextNode.h>

#import <Module_Framework/ASEditableTextNodeDelegate-Protocol.h>
#import <Module_Framework/ELMDisplayNode-Protocol.h>

@class ELMElement, NSMutableAttributedString, NSString;
@protocol ELMContext, ELMController;

@interface ELMEditableTextNode : ASEditableTextNode <ASEditableTextNodeDelegate, ELMDisplayNode>
{
    id <ELMContext> _context;
    NSMutableAttributedString *_replacementText;
    long long _cursorAdvancement;
    _Bool _shouldAcceptChange;
    ELMElement *_element;
}

+ (Class)replacementClassForElement:(id)arg1 materializationContext:(const struct MaterializationContext *)arg2;
+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
- (void).cxx_destruct;
@property(retain) ELMElement *element; // @synthesize element=_element;
- (void)resolveFirstResponder;
-     // Error parsing type: v32@0:8^{SenderState=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16@24, name: buildSenderState:withText:
- (long long)keyboardType;
-     // Error parsing type: v24@0:8^{SenderState=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16, name: buildSenderState:
- (void)editableTextNodeDidFinishEditing:(id)arg1;
- (void)editableTextNodeDidBeginEditing:(id)arg1;
- (_Bool)editableTextNode:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)applyViewProperties;
- (void)didLoad;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (_Bool)managesGestureHandling;
- (void)controllerDidApplyProperties;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <ELMController> controller; // @dynamic controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

