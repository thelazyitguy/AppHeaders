//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface STKMRAIDSizingProperties : NSObject
{
    struct CGSize _interfaceSize;
    struct CGSize _screenSize;
    struct CGRect _currentAdFrame;
    struct CGRect _defaultAdFrame;
}

+ (id)propertiesWithAdView:(id)arg1;
@property(readonly, nonatomic) struct CGRect defaultAdFrame; // @synthesize defaultAdFrame=_defaultAdFrame;
@property(readonly, nonatomic) struct CGRect currentAdFrame; // @synthesize currentAdFrame=_currentAdFrame;
@property(readonly, nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(readonly, nonatomic) struct CGSize interfaceSize; // @synthesize interfaceSize=_interfaceSize;
- (id)initWithView:(id)arg1;

@end
