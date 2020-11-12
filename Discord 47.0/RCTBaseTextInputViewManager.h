//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBaseTextViewManager.h"

#import "RCTUIManagerObserver-Protocol.h"

@class NSHashTable, NSString;

@interface RCTBaseTextInputViewManager : RCTBaseTextViewManager <RCTUIManagerObserver>
{
    NSHashTable *_shadowViews;
}

+ (id)propConfigShadow_onContentSizeChange;
+ (id)propConfigShadow_placeholder;
+ (id)propConfigShadow_text;
+ (id)propConfig_mostRecentEventCount;
+ (id)propConfig_onScroll;
+ (id)propConfig_onTextInput;
+ (id)propConfig_onSelectionChange;
+ (id)propConfig_onChange;
+ (id)propConfig_passwordRules;
+ (id)propConfig_textContentType;
+ (id)propConfig_inputAccessoryViewID;
+ (id)propConfig_selection;
+ (id)propConfig_selectTextOnFocus;
+ (id)propConfig_maxLength;
+ (id)propConfig_keyboardType;
+ (id)propConfig_clearTextOnFocus;
+ (id)propConfig_blurOnSubmit;
+ (id)propConfig_autoFocus;
+ (id)propConfig_secureTextEntry;
+ (id)propConfig_scrollEnabled;
+ (id)propConfig_clearButtonMode;
+ (id)propConfig_caretHidden;
+ (id)propConfig_spellCheck;
+ (id)propConfig_selectionColor;
+ (id)propConfig_returnKeyType;
+ (id)propConfig_placeholderTextColor;
+ (id)propConfig_placeholder;
+ (id)propConfig_keyboardAppearance;
+ (id)propConfig_enablesReturnKeyAutomatically;
+ (id)propConfig_editable;
+ (id)propConfig_contextMenuHidden;
+ (id)propConfig_autoCorrect;
+ (id)propConfig_autoCapitalize;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)handleDidUpdateMultiplierNotification;
- (void)uiManagerWillPerformMounting:(id)arg1;
- (void)setBridge:(id)arg1;
- (id)shadowView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
