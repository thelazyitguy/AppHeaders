//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SlackUI/NSCoding-Protocol.h>

@class NSString, NSURL, NSValue;

@interface SLKConcreteLink : NSObject <NSCoding>
{
    // Error parsing type: , name: ref
    // Error parsing type: , name: text
    // Error parsing type: , name: type
    // Error parsing type: , name: range
    // Error parsing type: , name: $__lazy_storage_$_refUrl
    // Error parsing type: , name: $__lazy_storage_$_textUrl
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSURL *textUrl;
@property(nonatomic, copy) NSURL *refUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, retain) NSValue *range; // @synthesize range;
@property(nonatomic) unsigned long long type; // @synthesize type;
@property(nonatomic, copy) NSString *text;
@property(nonatomic, copy) NSString *ref;

@end
