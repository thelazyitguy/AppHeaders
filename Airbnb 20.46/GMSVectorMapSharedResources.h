//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSFeatureStyle, GMSModelStyle, GMSTexturePool;
@protocol GMSStyleTable;

@interface GMSVectorMapSharedResources : NSObject
{
    struct unique_ptr<gmscore::vector::TextureCache, std::__1::default_delete<gmscore::vector::TextureCache>> _textureCache;
    struct array<gmscore::base::reffed_ptr<gmscore::renderer::StencilState>, 8> _writeTileStencilStates;
    struct array<gmscore::base::reffed_ptr<gmscore::renderer::StencilState>, 8> _checkTileStencilStates;
    struct array<gmscore::base::reffed_ptr<gmscore::renderer::StencilState>, 8> _writeIndoorAnimStencilStates;
    struct array<gmscore::base::reffed_ptr<gmscore::renderer::StencilState>, 8> _checkIndoorAnimStencilStates;
    vector_69d5a305 _offsetPolygonStates;
    reffed_ptr_7371fe81 _roadTextureState;
    reffed_ptr_7371fe81 _roadArrowState;
    reffed_ptr_7371fe81 _routeTextureState;
    reffed_ptr_7371fe81 _routeDimTextureState;
    reffed_ptr_9dddd61a _basicBlend;
    reffed_ptr_9dddd61a _premultipliedAlphaBlend;
    reffed_ptr_4c2746c7 _lessDepthBufferState;
    reffed_ptr_4c2746c7 _lEqualDepthBufferState;
    reffed_ptr_c8344b08 _depthMaskState;
    reffed_ptr_08be8c30 _basicLineState;
    reffed_ptr_5b7b7427 _colorMaskOffState;
    reffed_ptr_7371fe81 _whiteTextureState;
    GMSFeatureStyle *_indoorOutlineStyle;
    id <GMSStyleTable> _indoorOutlineStyleTable;
    GMSModelStyle *_indoorStencilStyle;
    GMSModelStyle *_indoorShadowStyle;
    GMSTexturePool *_texturePool;
    reffed_ptr_b6b7b6c6 _writeIndoorStencilState;
    reffed_ptr_b6b7b6c6 _checkIndoorStencilState;
    reffed_ptr_b6b7b6c6 _checkIndoorInverseStencilState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) reffed_ptr_b6b7b6c6 checkIndoorInverseStencilState; // @synthesize checkIndoorInverseStencilState=_checkIndoorInverseStencilState;
@property(nonatomic) reffed_ptr_b6b7b6c6 checkIndoorStencilState; // @synthesize checkIndoorStencilState=_checkIndoorStencilState;
@property(nonatomic) reffed_ptr_b6b7b6c6 writeIndoorStencilState; // @synthesize writeIndoorStencilState=_writeIndoorStencilState;
@property(readonly, nonatomic) GMSTexturePool *texturePool; // @synthesize texturePool=_texturePool;
@property(readonly, nonatomic) GMSModelStyle *indoorShadowStyle; // @synthesize indoorShadowStyle=_indoorShadowStyle;
@property(readonly, nonatomic) GMSModelStyle *indoorStencilStyle; // @synthesize indoorStencilStyle=_indoorStencilStyle;
@property(readonly, nonatomic) id <GMSStyleTable> indoorOutlineStyleTable; // @synthesize indoorOutlineStyleTable=_indoorOutlineStyleTable;
@property(readonly, nonatomic) GMSFeatureStyle *indoorOutlineStyle; // @synthesize indoorOutlineStyle=_indoorOutlineStyle;
@property(readonly, nonatomic) const vector_69d5a305 *offsetPolygonStates; // @synthesize offsetPolygonStates=_offsetPolygonStates;
@property(readonly, nonatomic) reffed_ptr_7371fe81 whiteTextureState; // @synthesize whiteTextureState=_whiteTextureState;
@property(readonly, nonatomic) reffed_ptr_5b7b7427 colorMaskOffState; // @synthesize colorMaskOffState=_colorMaskOffState;
@property(readonly, nonatomic) reffed_ptr_08be8c30 basicLineState; // @synthesize basicLineState=_basicLineState;
@property(readonly, nonatomic) reffed_ptr_c8344b08 depthMaskState; // @synthesize depthMaskState=_depthMaskState;
@property(readonly, nonatomic) reffed_ptr_4c2746c7 lEqualDepthBufferState; // @synthesize lEqualDepthBufferState=_lEqualDepthBufferState;
@property(readonly, nonatomic) reffed_ptr_4c2746c7 lessDepthBufferState; // @synthesize lessDepthBufferState=_lessDepthBufferState;
@property(readonly, nonatomic) reffed_ptr_9dddd61a premultipliedAlphaBlend; // @synthesize premultipliedAlphaBlend=_premultipliedAlphaBlend;
@property(readonly, nonatomic) reffed_ptr_9dddd61a basicBlend; // @synthesize basicBlend=_basicBlend;
- (reffed_ptr_b6b7b6c6)stencilStateForType:(int)arg1 tileCoords:(id)arg2;
- (reffed_ptr_b6b7b6c6)checkIndoorAnimStencilForTileCoords:(id)arg1;
- (reffed_ptr_b6b7b6c6)writeIndoorAnimStencilForTileCoords:(id)arg1;
- (reffed_ptr_b6b7b6c6)checkTileStencilForTileCoords:(id)arg1;
- (reffed_ptr_b6b7b6c6)writeTileStencilForTileCoords:(id)arg1;
- (void)dealloc;
- (unsigned int)loadMipmappedTexture:(struct ResourceFinder *)arg1 label:(const char *)arg2 textureLevelNames:(const vector_ebb6ef3e *)arg3 extension:(const char *)arg4 bitmapInfo:(unsigned int)arg5 colorSpace:(const struct CGColorSpace *)arg6 numberOfComponents:(unsigned long long)arg7 texelFormat:(unsigned int)arg8 textureMinFilter:(unsigned int)arg9;
- (void)createHardcodedStyles;
@property(readonly, nonatomic) reffed_ptr_7371fe81 routeDimTextureState;
@property(readonly, nonatomic) reffed_ptr_7371fe81 routeTextureState;
@property(readonly, nonatomic) reffed_ptr_7371fe81 roadArrowState;
@property(readonly, nonatomic) reffed_ptr_7371fe81 roadTextureState;
@property(readonly, nonatomic) objc_metadata_hider_ptr_ab527736 textureCache;
- (id)initWithMetalActive:(_Bool)arg1;

@end

