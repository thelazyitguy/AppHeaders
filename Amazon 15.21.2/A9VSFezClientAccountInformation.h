//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface A9VSFezClientAccountInformation : NSObject
{
    NSString *_username;
    NSString *_application;
    NSString *_secret;
    NSURL *_baseAmazonURL;
    NSURL *_visualSearchServerURL;
}

+ (id)current;
+ (void)setCurrent:(id)arg1;
+ (id)demoClientAccountInformation;
+ (id)productionClientAccountInformation;
@property(readonly, nonatomic) NSURL *visualSearchServerURL; // @synthesize visualSearchServerURL=_visualSearchServerURL;
@property(readonly, nonatomic) NSURL *baseAmazonURL; // @synthesize baseAmazonURL=_baseAmazonURL;
@property(readonly, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(readonly, nonatomic) NSString *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)initWithClientAccountInformation:(id)arg1;

@end
