//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RLMTokenDataModel : NSObject
{
    _Bool _isAdmin;
    NSString *_identity;
    NSString *_appID;
    NSString *_path;
    double _expires;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(nonatomic) double expires; // @synthesize expires=_expires;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (id)initWithDictionary:(id)arg1;

@end
