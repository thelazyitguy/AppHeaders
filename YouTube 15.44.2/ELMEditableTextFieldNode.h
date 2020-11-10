//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASDisplayNode.h>

#import <Module_Framework/ELMDisplayNode-Protocol.h>
#import <Module_Framework/UITextFieldDelegate-Protocol.h>

@class ELMEditableTextNode, ELMElement, ELMNodeController, NSDictionary, NSMutableAttributedString, NSString;
@protocol ELMContext, ELMController;

@interface ELMEditableTextFieldNode : ASDisplayNode <ELMDisplayNode, UITextFieldDelegate>
{
    ELMEditableTextNode *_textNode;
    id <ELMContext> _context;
    NSMutableAttributedString *_replacementText;
    long long _cursorAdvancement;
    ELMNodeController *_textNodeController;
    _Bool _shouldAcceptChange;
    NSDictionary *_typingAttributes;
    ELMElement *_element;
}

+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
- (void).cxx_destruct;
@property(retain) ELMElement *element; // @synthesize element=_element;
- (void)resolveFirstResponder;
-     // Error parsing type: v32@0:8^{SenderState=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16@24, name: buildSenderState:withText:
- (long long)keyboardType;
-     // Error parsing type: v24@0:8^{SenderState=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16, name: buildSenderState:
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)didLoad;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (_Bool)managesGestureHandling;
- (void)textFieldDidChange:(id)arg1;
- (void)applyViewProperties;
- (void)controllerDidApplyProperties;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <ELMController> controller; // @dynamic controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

