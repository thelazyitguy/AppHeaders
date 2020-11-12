//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ChatUserMentionViewControllerDelegate-Protocol.h"
#import "TextInputPrefixListenerDelegate-Protocol.h"

@class Channel, ChatUserMentionViewController, NSString, NSTimer, TextInputPrefixListener, UIResponder;
@protocol AccountContext, UITextInput;

@interface ChatUserMentionTypeAheadAccessory : NSObject <TextInputPrefixListenerDelegate, ChatUserMentionViewControllerDelegate>
{
    Channel *_channel;
    UIResponder<UITextInput> *_textInput;
    TextInputPrefixListener *_prefixListener;
    ChatUserMentionViewController *_userMentionViewController;
    NSString *_currentSearchString;
    NSTimer *_debounceTimer;
    id <AccountContext> _accountContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) NSTimer *debounceTimer; // @synthesize debounceTimer=_debounceTimer;
@property(copy, nonatomic) NSString *currentSearchString; // @synthesize currentSearchString=_currentSearchString;
@property(nonatomic) __weak ChatUserMentionViewController *userMentionViewController; // @synthesize userMentionViewController=_userMentionViewController;
@property(retain, nonatomic) TextInputPrefixListener *prefixListener; // @synthesize prefixListener=_prefixListener;
@property(retain, nonatomic) UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
@property(retain, nonatomic) Channel *channel; // @synthesize channel=_channel;
- (void)chatUserMentionViewController:(id)arg1 didSelectContact:(id)arg2 prefix:(id)arg3 range:(struct _NSRange)arg4;
- (void)resetTypeahead;
- (void)noPrefixFoundForTextInputPrefixListener:(id)arg1;
- (void)fetchContactsWithPrefix:(id)arg1 prefix:(id)arg2 range:(struct _NSRange)arg3;
- (void)fetchContactsWithTimer:(id)arg1;
- (void)resetDebounceTimer;
- (void)textInputPrefixListener:(id)arg1 foundPrefix:(id)arg2 withWord:(id)arg3 wordRange:(struct _NSRange)arg4;
- (id)initWithAccountContext:(id)arg1 textInput:(id)arg2 chatUserMentionViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
