//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

@interface STKVASTAssetControlGuide : NSObject
{
    _Bool _enabled;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    NSArray *_constraints;
    id _extValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id extValue; // @synthesize extValue=_extValue;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)init;

@end
