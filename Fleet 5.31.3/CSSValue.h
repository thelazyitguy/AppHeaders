//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSSValue : NSObject
{
    NSString *_cssText;
    int cssValueType;
}

- (void).cxx_destruct;
@property(nonatomic) int cssValueType; // @synthesize cssValueType;
@property(retain, nonatomic) NSString *cssText; // @synthesize cssText=_cssText;
- (id)initWithUnitType:(int)arg1;
- (id)init;

@end
