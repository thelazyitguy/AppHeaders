//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MKAnnotation-Protocol.h"

@protocol MKOverlay <MKAnnotation>
@property(nonatomic, readonly) CDStruct_81567fd2 boundingMapRect;
@property(nonatomic, readonly) struct CLLocationCoordinate2D coordinate;

@optional
- (_Bool)canReplaceMapContent;
- (_Bool)intersectsMapRect:(CDStruct_81567fd2)arg1;
@end

