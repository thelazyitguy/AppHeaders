//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface AMIAppPackageManifestModule : NSObject <NSCopying>
{
    NSString *_moduleClassName;
    NSDictionary *_parameters;
}

+ (id)fromJSON:(id)arg1;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *moduleClassName; // @synthesize moduleClassName=_moduleClassName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
