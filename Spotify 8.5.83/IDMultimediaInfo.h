//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEvent, IDModel, NSString;

@interface IDMultimediaInfo : NSObject
{
    IDModel *_firstLineModel;
    IDModel *_secondLineModel;
    IDEvent *_updateMultimediaInfoEvent;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDEvent *updateMultimediaInfoEvent; // @synthesize updateMultimediaInfoEvent=_updateMultimediaInfoEvent;
@property(readonly, nonatomic) IDModel *secondLineModel; // @synthesize secondLineModel=_secondLineModel;
@property(readonly, nonatomic) IDModel *firstLineModel; // @synthesize firstLineModel=_firstLineModel;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
@property(nonatomic) long long secondLineTextId;
@property(copy, nonatomic) NSString *secondLine;
@property(nonatomic) long long firstLineTextId;
@property(copy, nonatomic) NSString *firstLine;
- (id)init;
- (id)initWithFirstLineModel:(id)arg1 secondLineModel:(id)arg2 updateEvent:(long long)arg3;

@end

