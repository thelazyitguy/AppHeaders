//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTUIFormField.h"

@class NSString;

@interface BTUICardPhoneNumberField : BTUIFormField
{
}

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)fieldContentDidChange;
@property(copy, nonatomic) NSString *phoneNumber;
- (_Bool)valid;
- (id)initWithFrame:(struct CGRect)arg1;

@end

