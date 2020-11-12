//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface UAPadding : NSObject
{
    NSNumber *_top;
    NSNumber *_bottom;
    NSNumber *_trailing;
    NSNumber *_leading;
}

+ (id)paddingValueInDict:(id)arg1 forKey:(id)arg2;
+ (id)paddingWithDictionary:(id)arg1;
+ (id)paddingWithTop:(id)arg1 bottom:(id)arg2 leading:(id)arg3 trailing:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *leading; // @synthesize leading=_leading;
@property(retain, nonatomic) NSNumber *trailing; // @synthesize trailing=_trailing;
@property(retain, nonatomic) NSNumber *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) NSNumber *top; // @synthesize top=_top;
- (id)initWithTop:(id)arg1 bottom:(id)arg2 leading:(id)arg3 trailing:(id)arg4;

@end
