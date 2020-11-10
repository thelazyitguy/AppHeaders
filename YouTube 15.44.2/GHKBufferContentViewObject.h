//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentViewObject.h>

@protocol SUPColorScheming;

@interface GHKBufferContentViewObject : GOOBaseContentViewObject
{
    double _bufferHeight;
    id <SUPColorScheming> _colorScheme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SUPColorScheming> colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) double bufferHeight; // @synthesize bufferHeight=_bufferHeight;
- (Class)contentViewClass;
- (id)initWithHeight:(double)arg1;

@end

