//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface IFTextField : UITextField
{
    _Bool _canResign;
    _Bool _isNeedSaveSecureText;
}

@property(nonatomic) _Bool isNeedSaveSecureText; // @synthesize isNeedSaveSecureText=_isNeedSaveSecureText;
@property(nonatomic) _Bool canResign; // @synthesize canResign=_canResign;
- (_Bool)becomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (void)setSecureTextEntry:(_Bool)arg1;

@end
