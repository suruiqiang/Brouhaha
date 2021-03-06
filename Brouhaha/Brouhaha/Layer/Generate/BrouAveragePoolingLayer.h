#if defined(type) && defined(real) && defined(BROU_METAL) && defined(BROU_OBJECT)

@interface BROU_OBJECT(AveragePoolingLayer) : BROU_OBJECT(PoolingLayer) {
    /**if the average include the pad*/
    BOOL _withPad;
}

- (instancetype)initWithDevice:(id<MTLDevice>)device
                       library:(id<MTLLibrary>)library
                  kernelHeight:(int)kernelHeight
                   kernelWidth:(int)kernelWidth
                        padTop:(int)padTop
                       padLeft:(int)padLeft
                       strideY:(int)strideY
                       strideX:(int)strideX
                       withPad:(BOOL)withPad;

@end

#endif
