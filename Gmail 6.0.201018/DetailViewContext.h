//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol GBTActionSource, JBTSpan;

@interface DetailViewContext : NSObject
{
    _Bool _openingFromNotification;
    _Bool _shouldAnimate;
    unsigned long long _detailViewType;
    unsigned long long _navigationType;
    id <JBTSpan> _parentSpan;
    UIViewController<GBTActionSource> *_fromView;
    CDUnknownBlockType _completionHandler;
    NSString *_account;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(nonatomic) _Bool openingFromNotification; // @synthesize openingFromNotification=_openingFromNotification;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIViewController<GBTActionSource> *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) id <JBTSpan> parentSpan; // @synthesize parentSpan=_parentSpan;
@property(nonatomic) unsigned long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) unsigned long long detailViewType; // @synthesize detailViewType=_detailViewType;
- (id)initWithDetailViewType:(unsigned long long)arg1;

@end

