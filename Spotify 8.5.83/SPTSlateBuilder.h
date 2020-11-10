//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSlateBuilder-Protocol.h"

@class NSMutableDictionary, NSString, UIColor;
@protocol SPTSlateDataSource, SPTSlateDelegate;

@interface SPTSlateBuilder : NSObject <SPTSlateBuilder>
{
    id <SPTSlateDataSource> dataSource;
    id <SPTSlateDelegate> delegate;
    double cornerRadius;
    double shadowAlpha;
    UIColor *shadowColor;
    double shadowRadius;
    UIColor *backgroundColor;
    NSMutableDictionary *userInfo;
    struct CGSize slateSize;
    struct CGSize shadowOffset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic) struct CGSize slateSize; // @synthesize slateSize;
@property(nonatomic) __weak id <SPTSlateDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <SPTSlateDataSource> dataSource; // @synthesize dataSource;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
