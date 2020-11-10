//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASEditableTextNode.h>

#import <Module_Framework/ASEditableTextNodeDelegate-Protocol.h>
#import <Module_Framework/ELMDisplayNode-Protocol.h>
#import <Module_Framework/ELMStoreSubscriber-Protocol.h>
#import <Module_Framework/YTUserMentionsObserver-Protocol.h>
#import <Module_Framework/YTUserMentionsViewControllerDelegate-Protocol.h>

@class ASScrollNode, ELMElement, NSMutableArray, NSString, UIViewController;
@protocol ELMContext, ELMController, YTUserMentionViewControllerProtocol;

@interface YTMentionsEditableTextNode : ASEditableTextNode <ASEditableTextNodeDelegate, ELMStoreSubscriber, YTUserMentionsViewControllerDelegate, YTUserMentionsObserver, ELMDisplayNode>
{
    id <ELMContext> _context;
    NSString *_currentEditableTextWithUserMentionsSearch;
    long long _currentTriggerLocation;
    ASScrollNode *_scrollableContainer;
    NSString *_currentEditableText;
    _Bool _onChange;
    NSMutableArray *_suggestionTriggerText;
    NSString *_currentTriggerText;
    UIViewController<YTUserMentionViewControllerProtocol> *_userMentionsVC;
    unsigned long long _socialSuggestionSource;
    _Bool _logShowingSuggestedUsers;
    NSString *_searchedText;
    NSMutableArray *_stylePatterns;
    double _mentionsContentOffsetY;
    ELMElement *_element;
    // Error parsing type: {MentionsEditableTextType="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"mention_runs_"{WeakRepeatedPtrField<youtube::elements::extensions::MentionRun>=""(?="weak"{RepeatedPtrField<youtube::elements::extensions::MentionRun>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"trigger_text_"{RepeatedPtrField<std::__1::basic_string<char> >="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}}"style_patterns_"{WeakRepeatedPtrField<youtube::elements::extensions::StylePattern>=""(?="weak"{RepeatedPtrField<youtube::elements::extensions::StylePattern>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"text_"^{MessageLite}"placeholder_text_"^{MessageLite}"on_change_"^{MessageLite}"on_focus_"^{MessageLite}"on_blur_"^{MessageLite}"on_suggested_mentions_flow_did_start_"^{MessageLite}"is_focused_"B"enable_user_mentions_"B"disable_new_lines_"B"is_dark_theme_"B"source_logging_"i"enable_auto_scroll_"B"allow_multiline_"B}, name: _editableTextType
}

+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
// Error parsing type for property editableTextType:
// Property attributes: T^{MentionsEditableTextType=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{WeakRepeatedPtrField<youtube::elements::extensions::MentionRun>=(?={RepeatedPtrField<youtube::elements::extensions::MentionRun>=^{Arena}ii^{Rep}})}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{WeakRepeatedPtrField<youtube::elements::extensions::StylePattern>=(?={RepeatedPtrField<youtube::elements::extensions::StylePattern>=^{Arena}ii^{Rep}})}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}BBBBiBB},N,V_editableTextType

@property(retain) ELMElement *element; // @synthesize element=_element;
- (void)resetUserMentionQuery;
- (void)userMentionSuggestionsDidUpdate:(id)arg1;
- (void)suggestedMentionsCleared;
- (void)suggestedUserMentionFlowDidStart;
- (void)resetUserMentionLocation;
- (void)suggestedUserMentionWasSelected:(id)arg1 channelId:(id)arg2 suggestedRenderer:(id)arg3;
- (void)scrollTextIntoView;
- (void)keyboardDidShow:(id)arg1;
- (void)resetSocialSuggestionFlowData;
- (void)setupStylePatterns;
- (void)setupSourceLogging;
- (void)setupSocialSuggestions;
- (void)updateTextWithStylePatterns;
- (void)removeSocialSuggestions;
- (void)displaySocialSuggestions;
- (id)triggerTextForLocation:(long long)arg1 text:(id)arg2;
- (void)applyEditableTextProperties;
- (void)updateAttributedTextWithReplacementText:(id)arg1 channelName:(id)arg2 channelId:(id)arg3 suggestionStartLocation:(long long)arg4 shouldAppendSingleSpace:(_Bool)arg5 updateDisplay:(_Bool)arg6;
- (void)updateAttributedTextWithChips:(id)arg1 shouldAppendSingleSpace:(_Bool)arg2;
- (void)applyMentionRuns:(const RepeatedPtrField_73f6bbf5 *)arg1 withContentText:(const basic_string_90719d97 *)arg2;
- (_Bool)updateCurrentEditableTextIfNecessary:(id)arg1;
- (_Bool)enableAutoScroll;
- (_Bool)enableSocialTriggerText;
- (_Bool)enableUserMentions;
- (_Bool)enableSocialSuggestions;
- (void)triggerOnChangeIfPresent;
- (void)resolveFirstResponder;
-     // Error parsing type: @24@0:8r^{MentionsEditableTextType=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{WeakRepeatedPtrField<youtube::elements::extensions::MentionRun>=(?={RepeatedPtrField<youtube::elements::extensions::MentionRun>=^{Arena}ii^{Rep}})}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{WeakRepeatedPtrField<youtube::elements::extensions::StylePattern>=(?={RepeatedPtrField<youtube::elements::extensions::StylePattern>=^{Arena}ii^{Rep}})}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}BBBBiBB}16, name: getDefaultTextAttributes:
- (id)getDefaultFontWithSize:(double)arg1;
-     // Error parsing type: v24@0:8r^{MentionsEditableTextType=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{WeakRepeatedPtrField<youtube::elements::extensions::MentionRun>=(?={RepeatedPtrField<youtube::elements::extensions::MentionRun>=^{Arena}ii^{Rep}})}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{WeakRepeatedPtrField<youtube::elements::extensions::StylePattern>=(?={RepeatedPtrField<youtube::elements::extensions::StylePattern>=^{Arena}ii^{Rep}})}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}BBBBiBB}16, name: setTextFontAndColorWithAttributes:
- (void)setDefaultFontWithSize:(double)arg1;
-     // Error parsing type: v24@0:8r^{MentionsEditableTextType=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{WeakRepeatedPtrField<youtube::elements::extensions::MentionRun>=(?={RepeatedPtrField<youtube::elements::extensions::MentionRun>=^{Arena}ii^{Rep}})}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{WeakRepeatedPtrField<youtube::elements::extensions::StylePattern>=(?={RepeatedPtrField<youtube::elements::extensions::StylePattern>=^{Arena}ii^{Rep}})}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}^{MessageLite}BBBBiBB}16, name: setTextFontAndColor:
- (void)didLayoutWithTextChangeWithTriggerText;
- (void)didLayoutWithTextChange;
- (void)storeDidUpdateAtKey:(id)arg1 withPreviousBytes:(id)arg2 newBytes:(id)arg3;
-     // Error parsing type: v24@0:8^{SenderState=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16, name: buildSenderState:
- (void)editableTextNodeDidFinishEditing:(id)arg1;
- (void)editableTextNodeDidBeginEditing:(id)arg1;
- (void)editableTextNodeDidUpdateText:(id)arg1;
- (_Bool)editableTextNode:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)layoutDidFinish;
- (void)didLoad;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (_Bool)managesGestureHandling;
- (void)controllerDidApplyProperties;
- (void)dealloc;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <ELMController> controller; // @dynamic controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

