//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNROBaseObject.h>

@class FNROUser, NSArray, NSString;

@interface FNROPhoneContact : FNROBaseObject
{
    NSString *_fullName;
    NSArray *_phones;
    NSArray *_emails;
    FNROUser *_user;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FNROUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property(retain, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;

@end
