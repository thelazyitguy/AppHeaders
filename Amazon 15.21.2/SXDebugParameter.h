//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXDebugParameter : NSObject
{
    Class _requestClass;
    NSString *_key;
    NSObject *_value;
}

@property(retain, nonatomic) NSObject *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) Class requestClass; // @synthesize requestClass=_requestClass;
- (void).cxx_destruct;
- (id)init;

@end
