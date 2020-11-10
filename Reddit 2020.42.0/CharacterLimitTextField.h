//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTextField.h>

@class BaseLabel;

@interface CharacterLimitTextField : BaseTextField
{
    _Bool _displayCharacterCount;
    _Bool _enforceCharacterLimit;
    long long _characterLengthWarningThreshold;
    long long _characterLengthLimit;
    BaseLabel *_characterLimitIndicatorLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseLabel *characterLimitIndicatorLabel; // @synthesize characterLimitIndicatorLabel=_characterLimitIndicatorLabel;
@property(nonatomic) _Bool enforceCharacterLimit; // @synthesize enforceCharacterLimit=_enforceCharacterLimit;
@property(nonatomic) _Bool displayCharacterCount; // @synthesize displayCharacterCount=_displayCharacterCount;
@property(nonatomic) long long characterLengthLimit; // @synthesize characterLengthLimit=_characterLengthLimit;
@property(nonatomic) long long characterLengthWarningThreshold; // @synthesize characterLengthWarningThreshold=_characterLengthWarningThreshold;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)updateCharacterCountLabel;
- (id)initWithFrame:(struct CGRect)arg1 characterLengthLimit:(long long)arg2 characterLengthWarningThreshold:(long long)arg3;

@end

