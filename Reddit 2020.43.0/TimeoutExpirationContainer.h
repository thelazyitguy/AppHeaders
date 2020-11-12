//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TimeoutExpirationContainer : NSObject
{
    id _value;
    NSDate *_expirationDate;
    CDUnknownBlockType _validationPredicate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType validationPredicate; // @synthesize validationPredicate=_validationPredicate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) _Bool isValid;
- (id)initWithValue:(id)arg1 expirationDate:(id)arg2;
- (id)initWithValue:(id)arg1 expirationDate:(id)arg2 validationPredicate:(CDUnknownBlockType)arg3;

@end
