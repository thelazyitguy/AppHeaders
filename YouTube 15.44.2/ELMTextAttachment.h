//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ASInterfaceStateDelegate-Protocol.h>
#import <Module_Framework/ELMTextAttachmentDelegate-Protocol.h>

@class ASTextNode, ELMImageNode, NSString, UIFont;
@protocol ELMContext;

@interface ELMTextAttachment : NSObject <ASInterfaceStateDelegate, ELMTextAttachmentDelegate>
{
    // Error parsing type: {AttachmentRun="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"element_"^{MessageLite}"start_index_"I"length_"I"alignment_"i}, name: _attachmentRun
    ELMImageNode *_imageNode;
    id <ELMContext> _context;
    ASTextNode *_textNode;
    UIFont *_font;
}

+     // Error parsing type: {?={CGSize=dd}{CGSize=dd}}32@0:8r^{Element=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<youtube::elements::Element>=^{Arena}ii^{Rep}}^{MessageLite}^{MessageLite}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}}16@24, name: sizeRangeForElement:withFont:
+     // Error parsing type: v40@0:8@16r^{Element=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<youtube::elements::Element>=^{Arena}ii^{Rep}}^{MessageLite}^{MessageLite}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}}24@32, name: measureImageNode:withElement:withFont:
+     // Error parsing type: @40@0:8@16r^{AttachmentRun=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{MessageLite}IIi}24@32, name: createImageNodeWithContext:withAttachmentRun:withFont:
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak ASTextNode *textNode; // @synthesize textNode=_textNode;
- (void)updateText;
-     // Error parsing type: r^{LayoutProperties=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}f^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}iiffiiiii^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}i}16@0:8, name: layoutProperties
- (void)imageNode:(id)arg1 didFailWithError:(id)arg2;
- (void)imageNode:(id)arg1 didLoadImage:(id)arg2;
- (void)hierarchyDisplayDidFinish;
- (void)interfaceStateDidChange:(unsigned char)arg1 fromState:(unsigned char)arg2;
- (void)didExitPreloadState;
- (void)didEnterPreloadState;
- (void)didExitDisplayState;
- (void)didEnterDisplayState;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)nodeWillCalculateLayout:(CDStruct_42a63532)arg1;
- (void)nodeDidLoad;
- (void)nodeDidLayout;
- (void)dealloc;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property(readonly, nonatomic) struct CGSize attachmentSize;
@property(readonly, nonatomic) long long alignment;
@property(readonly, nonatomic) ELMImageNode *imageNode;
-     // Error parsing type: @40@0:8@16r^{AttachmentRun=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{MessageLite}IIi}24@32, name: initWithContext:attachmentRun:font:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
